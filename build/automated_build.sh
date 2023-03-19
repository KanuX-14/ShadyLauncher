#!/bin/sh

mkdir -pv build

cmake -S .. -B ./build-release-qt5 -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=ShadyLauncher-release-qt5 -DENABLE_LTO=ON -G Ninja
cmake -S .. -B ./build-release-qt6 -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=ShadyLauncher-release-qt6 -DENABLE_LTO=ON -DLauncher_QT_VERSION_MAJOR="6" -G Ninja
cmake -S .. -B ./build-debug-qt5 -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=ShadyLauncher-debug-qt5 -DENABLE_LTO=ON -G Ninja
cmake -S .. -B ./build-debug-qt6 -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=ShadyLauncher-debug-qt6 -DENABLE_LTO=ON -DLauncher_QT_VERSION_MAJOR="6" -G Ninja
