if(UNIX)
    find_package(PkgConfig)
    if(PkgConfig_FOUND)
        pkg_search_module(SCDOC scdoc)
        if(SCDOC_FOUND)
            pkg_get_variable(SCDOC_SCDOC scdoc scdoc)
        endif()
    endif()
endif()

set(Launcher_CommonName "ShadyLauncher")
set(Launcher_DisplayName "Shady Launcher")

set(Launcher_Name "${Launcher_CommonName}" PARENT_SCOPE)
set(Launcher_DisplayName "${Launcher_DisplayName}" PARENT_SCOPE)

set(Launcher_Copyright "Shady Launcher Contributors\\n Prism Launcher Contributors\\n© 2021-2022 PolyMC Contributors \\n© 2012-2021 MultiMC Contributors")
set(Launcher_Copyright_Mac "Shady Launcher Contributors, Prism Launcher Contributors, © 2021-2022 PolyMC Contributors and © 2012-2021 MultiMC Contributors" PARENT_SCOPE)
set(Launcher_Copyright "${Launcher_Copyright}" PARENT_SCOPE)
set(Launcher_Domain "shadylauncher.org" PARENT_SCOPE)
set(Launcher_UserAgent "${Launcher_CommonName}/${Launcher_VERSION_NAME}" PARENT_SCOPE)
set(Launcher_ConfigFile "shadylauncher.cfg" PARENT_SCOPE)
set(Launcher_Git "https://gitlab.com/KanuX/shadylauncher" PARENT_SCOPE)
set(Launcher_DesktopFileName "org.shadylauncher.ShadyLauncher.desktop" PARENT_SCOPE)
set(Launcher_SVGFileName "org.shadylauncher.ShadyLauncher.svg" PARENT_SCOPE)

set(Launcher_Desktop "program_info/org.shadylauncher.ShadyLauncher.desktop" PARENT_SCOPE)
set(Launcher_mrpack_MIMEInfo "program_info/modrinth-mrpack-mime.xml" PARENT_SCOPE)
set(Launcher_MetaInfo "program_info/org.shadylauncher.ShadyLauncher.metainfo.xml" PARENT_SCOPE)
set(Launcher_SVG "program_info/org.shadylauncher.ShadyLauncher.svg" PARENT_SCOPE)
set(Launcher_Branding_ICNS "program_info/shadylauncher.icns" PARENT_SCOPE)
set(Launcher_Branding_ICO "program_info/shadylauncher.ico")
set(Launcher_Branding_ICO "${Launcher_Branding_ICO}" PARENT_SCOPE)
set(Launcher_Branding_WindowsRC "program_info/shadylauncher.rc" PARENT_SCOPE)
set(Launcher_Branding_LogoQRC "program_info/shadylauncher.qrc" PARENT_SCOPE)

set(Launcher_Portable_File "program_info/portable.txt" PARENT_SCOPE)

configure_file(org.shadylauncher.ShadyLauncher.desktop.in org.shadylauncher.ShadyLauncher.desktop)
configure_file(org.shadylauncher.ShadyLauncher.metainfo.xml.in org.shadylauncher.ShadyLauncher.metainfo.xml)
configure_file(shadylauncher.rc.in ShadyLauncher.rc @ONLY)
configure_file(shadylauncher.manifest.in shadylauncher.manifest @ONLY)
configure_file(shadylauncher.ico shadylauncher.ico COPYONLY)
configure_file(win_install.nsi.in win_install.nsi @ONLY)

if(SCDOC_FOUND)
    set(in_scd "${CMAKE_CURRENT_SOURCE_DIR}/shadylauncher.6.scd")
    set(out_man "${CMAKE_CURRENT_BINARY_DIR}/shadylauncher.6")
    add_custom_command(
        DEPENDS "${in_scd}"
        OUTPUT "${out_man}"
        COMMAND ${SCDOC_SCDOC} < "${in_scd}" > "${out_man}"
    )
    add_custom_target(man ALL DEPENDS ${out_man})
    set(Launcher_ManPage "program_info/shadylauncher.6" PARENT_SCOPE)
endif()
