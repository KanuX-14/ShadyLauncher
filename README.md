<p align="center">
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="/program_info/org.shadylauncher.ShadyLauncher.logo-darkmode.svg">
  <source media="(prefers-color-scheme: light)" srcset="/program_info/org.shadylauncher.ShadyLauncher.logo.svg">
  <img alt="Shady Launcher" src="/program_info/org.shadylauncher.ShadyLauncher.logo.svg" width="40%">
</picture>
</p>

<p align="center">
  Shady Launcher is a custom launcher for Minecraft that allows you to easily manage multiple installations of Minecraft at once.<br />
  <br />This is a <b>fork</b> of the Prism Launcher and is <b>not</b> endorsed by it.
</p>

## Installation

<a href="https://repology.org/project/shadylauncher/versions">
    <img src="https://repology.org/badge/vertical-allrepos/shadylauncher.svg" alt="Packaging status" align="right">
</a>

- All downloads and instructions for Shady Launcher can be found on our [Release tab](https://gitlab.com/KanuX/ShadyLauncher/-/releases).

### Development Builds

Prebuilt Development builds are provided for **Linux**, and **Windows**.

These packages are also availiable to all the distributions based on the ones mentioned above.

## Translations

The translation effort for Shady Launcher is made by Prism Launcher and it is available at <https://github.com/PrismLauncher/Translations>

## Building

If you want to build Shady Launcher yourself, check the [Build Instructions](https://gitlab.com/KanuX/ShadyLauncher/-/blob/master/BUILD.md).

## Forking/Redistributing/Custom builds policy

We don't care what you do with your fork/custom build as long as you follow the terms of the [license](https://gitlab.com/KanuX/ShadyLauncher/-/blob/master/LICENSE) (this is a legal responsibility), and if you made code changes rather than just packaging a custom build, please do the following as a basic courtesy:

- Make it clear that your fork is not ShadyLauncher and is not endorsed by or affiliated with the ShadyLauncher project (<https://gitlab.com/KanuX/ShadyLauncher>).
- Go through [CMakeLists.txt](https://gitlab.com/KanuX/ShadyLauncher/-/blob/master/CMakeLists.txt) and change ShadyLauncher's API keys to your own or set them to empty strings (`""`) to disable them (this way the program will still compile but the functionality requiring those keys will be disabled).

If you have any questions or want any clarification on the above conditions please make an issue and ask us.

Be aware that if you build this software without removing the provided API keys in [CMakeLists.txt](https://gitlab.com/KanuX/ShadyLauncher/-/blob/master/CMakeLists.txt) you are accepting the following terms and conditions:

- [CurseForge 3rd Party API Terms and Conditions](https://support.curseforge.com/en/support/solutions/articles/9000207405-curse-forge-3rd-party-api-terms-and-conditions)

If you do not agree with these terms and conditions, then remove the associated API keys from the [CMakeLists.txt](https://gitlab.com/KanuX/ShadyLauncher/-/blob/master/CMakeLists.txt) file by setting them to an empty string (`""`).

## License [![https://gitlab.com/KanuX/ShadyLauncher/-/blob/master/LICENSE](https://img.shields.io/gitlab/license/KanuX/ShadyLauncher?label=License&logo=gnu&color=C4282D)](LICENSE)

All launcher code is available under the GPL-3.0-only license.

The logo and related assets are under the CC BY-SA 4.0 license.
