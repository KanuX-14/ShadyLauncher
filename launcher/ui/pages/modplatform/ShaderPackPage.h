#pragma once

#include "ui/pages/modplatform/ResourcePage.h"
#include "ui/pages/modplatform/ShaderPackModel.h"

namespace Ui {
class ResourcePage;
}

namespace ResourceDownload {

class ShaderPackDownloadDialog;

class ShaderPackResourcePage : public ResourcePage {
    Q_OBJECT

   public:
    template <typename T>
    static T* create(ShaderPackDownloadDialog* dialog, BaseInstance& instance)
    {
        auto page = new T(dialog, instance);
        auto model = static_cast<ShaderPackResourceModel*>(page->getModel());

        connect(model, &ResourceModel::versionListUpdated, page, &ResourcePage::updateVersionList);
        connect(model, &ResourceModel::projectInfoUpdated, page, &ResourcePage::updateUi);

        return page;
    }

    ~ShaderPackResourcePage() override = default;

    //: The plural version of 'shader pack'
    [[nodiscard]] inline QString resourcesString() const override { return tr("shader packs"); }
    //: The singular version of 'shader packs'
    [[nodiscard]] inline QString resourceString() const override { return tr("shader pack"); }

    [[nodiscard]] bool supportsFiltering() const override { return false; };

    void addResourceToDialog(ModPlatform::IndexedPack&, ModPlatform::IndexedVersion&) override;

    [[nodiscard]] QMap<QString, QString> urlHandlers() const override;

   protected:
    ShaderPackResourcePage(ShaderPackDownloadDialog* dialog, BaseInstance& instance);

   protected slots:
    void triggerSearch() override;
};

}  // namespace ResourceDownload
