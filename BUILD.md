# Build Instructions

Unknown build instructions will be available on the [PrismLauncher wiki](https://prismlauncher.org/wiki/development/build-instructions/).

## Getting the source

Clone the source code using git, and grab all the submodules. This is generic for all platforms you want to build on.
```
git clone --recursive https://gitlab.com/KanuX/shadylauncher.git ShadyLauncher
cd ShadyLauncher
```

## Linux

This guide will mostly mention dependant packages by their origin, so it can be accessible along all distributions.

### Dependencies

| Package         | URL                                       |
|-----------------|-------------------------------------------|
| C++17 compiler  | https://ftp.gnu.org/gnu/gcc/              |
| Qt5 or newer    | https://github.com/qt/qt5                 |
| CMake           | https://gitlab.kitware.com/cmake/cmake    |
| zLib            | https://github.com/madler/zlib            |
| Java JDK        | https://jdk.java.net/                     |
| Mesa GL headers | https://gitlab.freedesktop.org/mesa/mesa/ |
| scdoc           | https://git.sr.ht/~sircmpwn/scdoc         |

The JDK folder need to be pointed by the `JAVA_HOME` variable.<br>
Insert the `JAVA_HOME` variable into your `.profile` or `.*rc` file to automatically set whenever the terminal opens.

The `JAVA_HOME` variable can also be set, by the moment, using `export`:
```sh
export JAVA_HOME=/full/path/to/your/jdk
```

It is recommended to use <b>OpenJDK 8</b> for compatibility.

### Automatic compiling

In the `build` folder of the repository, choose your build configuration:
```sh
make help
```

And then compile:
```sh
make shadylauncher-linux-debug-qt6 -j$(nproc)
```

#### Manual compiling

In the root folder of the repository, generate the build files:
```sh
cmake -S . -B build-linux -DCMAKE_INSTALL_PREFIX=install-linux -DENABLE_LTO=ON -DLauncher_QT_VERSION_MAJOR="6" -DCMAKE_BUILD_TYPE=Debug -G "Ninja"
```
A release can be created by changing `CMAKE_BUILD_TYPE` to `Release`.

Now build the project:
```sh
cmake --build build-linux -j$(nproc)
cmake --install build-linux
cmake --install build-linux --component portable
```
The binary can be found in the folder that `CMAKE_INSTALL_PREFIX` pointed to.

## Windows

This guide will use [MSYS2](https://www.msys2.org/) as the default compiler because it is better and lighter than MSVC.

### Dependencies

It is recommended using `CLANG64` [msystem](https://www.msys2.org/docs/environments/) of [MSYS2](https://www.msys2.org/), as it has fewer bugs.

Install helpers:
```sh
pacman -Syu pactoys git make zip mingw-w64-x86_64-binutils
```

Install build dependencies using `pacboy`:
```sh
# Qt6
pacboy -S toolchain:p cmake:p ninja:p qt6-base:p qt6-5compat:p qt6-svg:p qt6-imageformats:p quazip-qt6:p extra-cmake-modules:p ccache:p

# Qt5
pacboy -S toolchain:p cmake:p ninja:p qt5-base:p qt5-svg:p qt5-imageformats:p quazip-qt5:p extra-cmake-modules:p ccache:p
```

The JDK folder need to be pointed by the `JAVA_HOME` variable.<br>
Insert the `JAVA_HOME` variable into your `.profile` or `.*rc` file to automatically set whenever the terminal opens.

The `JAVA_HOME` variable can also be set, by the moment, using `export`:
```sh
export JAVA_HOME=/full/path/to/your/jdk
```

It is recommended to use <b>[OpenJDK 8](https://adoptium.net/en-GB/temurin/releases/?version=8)</b> for compatibility.

### Automatic compiling

In the `build` folder of the repository, choose your build configuration:
```sh
make help
```

And then compile:
```sh
make shadylauncher-windows-debug-qt6 -j$(nproc)
```

### Manual compiling

In the root folder of the repository, generate the build files:
```sh
cmake -S . -B build-windows -DCMAKE_INSTALL_PREFIX=install-windows -DENABLE_LTO=ON -DLauncher_QT_VERSION_MAJOR="6" -DCMAKE_OBJDUMP=/mingw64/bin/objdump.exe -DCMAKE_BUILD_TYPE=Debug -G "Ninja"
```
A release can be created by changing `CMAKE_BUILD_TYPE` to `Release`.

Now build the project:
```sh
cmake --build build-windows -j$(nproc)
cmake --install build-windows
cmake --install build-windows --component portable
```
The binary can be found in the folder that `CMAKE_INSTALL_PREFIX` pointed to.
