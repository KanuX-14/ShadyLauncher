// SPDX-License-Identifier: GPL-3.0-only
/*
 *  PolyMC - Minecraft Launcher
 *  Copyright (c) 2022 flowln <flowlnlnln@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "BuildConfig.h"
#include "modplatform/ModIndex.h"
#include "modplatform/helpers/NetworkResourceAPI.h"

#include <QDebug>

class ModrinthAPI : public NetworkResourceAPI {
   public:
    auto currentVersion(QString hash,
                        QString hash_format,
                        QByteArray* response) -> NetJob::Ptr;

    auto currentVersions(const QStringList& hashes,
                         QString hash_format,
                         QByteArray* response) -> NetJob::Ptr;

    auto latestVersion(QString hash,
                       QString hash_format,
                       std::optional<std::list<Version>> mcVersions,
                       std::optional<ModLoaderTypes> loaders,
                       QByteArray* response) -> NetJob::Ptr;

    auto latestVersions(const QStringList& hashes,
                        QString hash_format,
                       std::optional<std::list<Version>> mcVersions,
                       std::optional<ModLoaderTypes> loaders,
                        QByteArray* response) -> NetJob::Ptr;

    NetJob::Ptr getProjects(QStringList addonIds, QByteArray* response) const override;

   public:
    inline auto getAuthorURL(const QString& name) const -> QString { return "https://modrinth.com/user/" + name; };

    static auto getModLoaderStrings(const ModLoaderTypes types) -> const QStringList
    {
        QStringList l;
        for (auto loader : {Forge, Fabric, Quilt}) {
            if (types & loader) {
                l << getModLoaderString(loader);
            }
        }
        if ((types & Quilt) && (~types & Fabric))  // Add Fabric if Quilt is in use, if Fabric isn't already there
            l << getModLoaderString(Fabric);
        return l;
    }

    static auto getModLoaderFilters(ModLoaderTypes types) -> const QString
    {
        QStringList l;
        for (auto loader : getModLoaderStrings(types))
        {
            l << QString("\"categories:%1\"").arg(loader);
        }
        return l.join(',');
    }

   private:
    [[nodiscard]] static QString resourceTypeParameter(ModPlatform::ResourceType type)
    {
        switch (type) {
            case ModPlatform::ResourceType::MOD:
                return "mod";
            default:
                qWarning() << "Invalid resource type for Modrinth API!";
                break;
        }

        return "";
    }
    [[nodiscard]] QString createFacets(SearchArgs const& args) const
    {
        QStringList facets_list;

        if (args.loaders.has_value())
            facets_list.append(QString("[%1]").arg(getModLoaderFilters(args.loaders.value())));
        if (args.versions.has_value())
            facets_list.append(QString("[%1]").arg(getGameVersionsArray(args.versions.value())));
        facets_list.append(QString("[\"project_type:%1\"]").arg(resourceTypeParameter(args.type)));

        return QString("[%1]").arg(facets_list.join(','));
    }

   public:
    [[nodiscard]] inline auto getSearchURL(SearchArgs const& args) const -> std::optional<QString> override
    {
        if (args.loaders.has_value()) {
            if (!validateModLoaders(args.loaders.value())) {
                qWarning() << "Modrinth only have Forge and Fabric-compatible mods!";
                return {};
            }
        }

        QStringList get_arguments;
        get_arguments.append(QString("offset=%1").arg(args.offset));
        get_arguments.append(QString("limit=25"));
        if (args.search.has_value())
            get_arguments.append(QString("query=%1").arg(args.search.value()));
        if (args.sorting.has_value())
            get_arguments.append(QString("index=%1").arg(args.sorting.value()));
        get_arguments.append(QString("facets=%1").arg(createFacets(args)));

        return BuildConfig.MODRINTH_PROD_URL + "/search?" + get_arguments.join('&');
    };

    inline auto getInfoURL(QString const& id) const -> std::optional<QString> override
    {
        return BuildConfig.MODRINTH_PROD_URL + "/project/" + id;
    };

    inline auto getMultipleModInfoURL(QStringList ids) const -> QString
    {
        return BuildConfig.MODRINTH_PROD_URL + QString("/projects?ids=[\"%1\"]").arg(ids.join("\",\""));
    };

    inline auto getVersionsURL(VersionSearchArgs const& args) const -> std::optional<QString> override
    {
        QStringList get_arguments;
        if (args.mcVersions.has_value())
            get_arguments.append(QString("game_versions=[%1]").arg(getGameVersionsString(args.mcVersions.value())));
        if (args.loaders.has_value())
            get_arguments.append(QString("loaders=[\"%1\"]").arg(getModLoaderStrings(args.loaders.value()).join("\",\"")));

        return QString("%1/project/%2/version%3%4")
            .arg(BuildConfig.MODRINTH_PROD_URL, args.addonId, get_arguments.isEmpty() ? "" : "?", get_arguments.join('&'));
    };

    auto getGameVersionsArray(std::list<Version> mcVersions) const -> QString
    {
        QString s;
        for(auto& ver : mcVersions){
            s += QString("\"versions:%1\",").arg(ver.toString());
        }
        s.remove(s.length() - 1, 1); //remove last comma
        return s.isEmpty() ? QString() : s;
    }

    inline auto validateModLoaders(ModLoaderTypes loaders) const -> bool
    {
        return loaders & (Forge | Fabric | Quilt);
    }

};
