# General
CC=cmake
MAKEFILE_TYPE="Ninja"
TAR=tar -czf
ZIP=zip -9r

# Colours
RED=\e[1;31m
GREEN=\e[1;32m
YELLOW=\e[1;33m
BLUE=\e[1;34m
PURPLE=\e[1;35m
CYAN=\e[1;36m
RESET_COLOUR=\e[0m

# ShadyLauncher data:
#
#		ShadyLauncher Linux Debug Qt5
SHADYLAUNCHER_LINUX_QT5_DEBUG_BUILD_FOLDER="shadylauncher-linux-debug-qt5"
SHADYLAUNCHER_LINUX_QT5_DEBUG_RELEASE_FOLDER="i_shadylauncher-linux-debug-qt5"
SHADYLAUNCHER_LINUX_QT5_DEBUG_RELEASE_FILE="ShadyLauncher-linux-debug-qt5.tar.gz"
#
#		ShadyLauncher Linux Debug Qt6
SHADYLAUNCHER_LINUX_QT6_DEBUG_BUILD_FOLDER="shadylauncher-linux-debug-qt6"
SHADYLAUNCHER_LINUX_QT6_DEBUG_RELEASE_FOLDER="i_shadylauncher-linux-debug-qt6"
SHADYLAUNCHER_LINUX_QT6_DEBUG_RELEASE_FILE="ShadyLauncher-linux-debug-qt6.tar.gz"
#
#		ShadyLauncher Linux Release Qt5
SHADYLAUNCHER_LINUX_QT5_RELEASE_BUILD_FOLDER="shadylauncher-linux-release-qt5"
SHADYLAUNCHER_LINUX_QT5_RELEASE_RELEASE_FOLDER="i_shadylauncher-linux-release-qt5"
SHADYLAUNCHER_LINUX_QT5_RELEASE_RELEASE_FILE="ShadyLauncher-linux-release-qt5.tar.gz"
#
#		ShadyLauncher Linux Release Qt6
SHADYLAUNCHER_LINUX_QT6_RELEASE_BUILD_FOLDER="shadylauncher-linux-release-qt6"
SHADYLAUNCHER_LINUX_QT6_RELEASE_RELEASE_FOLDER="i_shadylauncher-linux-release-qt6"
SHADYLAUNCHER_LINUX_QT6_RELEASE_RELEASE_FILE="ShadyLauncher-linux-release-qt6.tar.gz"
#
#		ShadyLauncher Windows Debug Qt5
SHADYLAUNCHER_WINDOWS_QT5_DEBUG_BUILD_FOLDER="shadylauncher-windows-debug-qt5"
SHADYLAUNCHER_WINDOWS_QT5_DEBUG_RELEASE_FOLDER="i_shadylauncher-windows-debug-qt5"
SHADYLAUNCHER_WINDOWS_QT5_DEBUG_RELEASE_FILE="ShadyLauncher-windows-debug-qt5.zip"
#
#		ShadyLauncher Windows Debug Qt6
SHADYLAUNCHER_WINDOWS_QT6_DEBUG_BUILD_FOLDER="shadylauncher-windows-debug-qt6"
SHADYLAUNCHER_WINDOWS_QT6_DEBUG_RELEASE_FOLDER="i_shadylauncher-windows-debug-qt6"
SHADYLAUNCHER_WINDOWS_QT6_DEBUG_RELEASE_FILE="ShadyLauncher-windows-debug-qt6.zip"
#
#		ShadyLauncher Windows Release Qt5
SHADYLAUNCHER_WINDOWS_QT5_RELEASE_BUILD_FOLDER="shadylauncher-windows-release-qt5"
SHADYLAUNCHER_WINDOWS_QT5_RELEASE_RELEASE_FOLDER="i_shadylauncher-windows-release-qt5"
SHADYLAUNCHER_WINDOWS_QT5_RELEASE_RELEASE_FILE="ShadyLauncher-windows-release-qt5.zip"
#
#		ShadyLauncher Windows Release Qt6
SHADYLAUNCHER_WINDOWS_QT6_RELEASE_BUILD_FOLDER="shadylauncher-windows-release-qt6"
SHADYLAUNCHER_WINDOWS_QT6_RELEASE_RELEASE_FOLDER="i_shadylauncher-windows-release-qt6"
SHADYLAUNCHER_WINDOWS_QT6_RELEASE_RELEASE_FILE="ShadyLauncher-windows-release-qt6.zip"
#

shadylauncher-linux-debug-qt5:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Linux Debug${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_LINUX_QT5_DEBUG_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_LINUX_QT5_DEBUG_RELEASE_FOLDER} -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Linux Debug${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_LINUX_QT5_DEBUG_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT5_DEBUG_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT5_DEBUG_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_LINUX_QT5_DEBUG_RELEASE_FOLDER} ShadyLauncher
		@${TAR} ${SHADYLAUNCHER_LINUX_QT5_DEBUG_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_LINUX_QT5_DEBUG_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_LINUX_QT5_DEBUG_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Linux Debug${RESET_COLOUR} ${PURPLE}Qt5${RESET_COLOUR} ready for launch.\n'

shadylauncher-linux-debug-qt6:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Linux Debug${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_LINUX_QT6_DEBUG_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_LINUX_QT6_DEBUG_RELEASE_FOLDER} -DLauncher_QT_VERSION_MAJOR="6" -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Linux Debug${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_LINUX_QT6_DEBUG_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT6_DEBUG_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT6_DEBUG_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_LINUX_QT6_DEBUG_RELEASE_FOLDER} ShadyLauncher
		@${TAR} ${SHADYLAUNCHER_LINUX_QT6_DEBUG_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_LINUX_QT6_DEBUG_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_LINUX_QT6_DEBUG_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Linux Debug${RESET_COLOUR} ${PURPLE}Qt6${RESET_COLOUR} ready for launch.\n'

shadylauncher-linux-release-qt5:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Linux Release${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_LINUX_QT5_RELEASE_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_LINUX_QT5_RELEASE_RELEASE_FOLDER} -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Linux Release${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_LINUX_QT5_RELEASE_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT5_RELEASE_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT5_RELEASE_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_LINUX_QT5_RELEASE_RELEASE_FOLDER} ShadyLauncher
		@${TAR} ${SHADYLAUNCHER_LINUX_QT5_RELEASE_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_LINUX_QT5_RELEASE_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_LINUX_QT5_RELEASE_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Linux Release${RESET_COLOUR} ${PURPLE}Qt5${RESET_COLOUR} ready for launch.\n'

shadylauncher-linux-release-qt6:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Linux Release${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_LINUX_QT6_RELEASE_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_LINUX_QT6_RELEASE_RELEASE_FOLDER} -DLauncher_QT_VERSION_MAJOR="6" -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Linux Release${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_LINUX_QT6_RELEASE_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT6_RELEASE_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_LINUX_QT6_RELEASE_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_LINUX_QT6_RELEASE_RELEASE_FOLDER} ShadyLauncher
		@${TAR} ${SHADYLAUNCHER_LINUX_QT6_RELEASE_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_LINUX_QT6_RELEASE_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_LINUX_QT6_RELEASE_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Linux Release${RESET_COLOUR} ${PURPLE}Qt6${RESET_COLOUR} ready for launch.\n'

shadylauncher-windows-debug-qt5:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Windows Debug${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_RELEASE_FOLDER} -DCMAKE_OBJDUMP=/mingw64/bin/objdump.exe -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Windows Debug${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_RELEASE_FOLDER} ShadyLauncher
		@${ZIP} ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT5_DEBUG_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Windows Debug${RESET_COLOUR} ${PURPLE}Qt5${RESET_COLOUR} ready for launch.\n'

shadylauncher-windows-debug-qt6:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Windows Debug${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_RELEASE_FOLDER} -DLauncher_QT_VERSION_MAJOR="6" -DCMAKE_OBJDUMP=/mingw64/bin/objdump.exe -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Windows Debug${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_RELEASE_FOLDER} ShadyLauncher
		@${ZIP} ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT6_DEBUG_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Windows Debug${RESET_COLOUR} ${PURPLE}Qt6${RESET_COLOUR} ready for launch.\n'

shadylauncher-windows-release-qt5:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Windows Release${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_RELEASE_FOLDER} -DCMAKE_OBJDUMP=/mingw64/bin/objdump.exe -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Windows Release${RESET_COLOUR} with the design of ${PURPLE}Qt5${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_RELEASE_FOLDER} ShadyLauncher
		@${ZIP} ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT5_RELEASE_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Windows Release${RESET_COLOUR} ${PURPLE}Qt5${RESET_COLOUR} ready for launch.\n'

shadylauncher-windows-release-qt6:
		@printf '${RED}>>>${RESET_COLOUR} Preparing build files for ${GREEN}Windows Release${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} -S .. -B ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_BUILD_FOLDER} -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_RELEASE_FOLDER} -DLauncher_QT_VERSION_MAJOR="6" -DCMAKE_OBJDUMP=/mingw64/bin/objdump.exe -DENABLE_LTO=ON -G ${MAKEFILE_TYPE}
		@printf '${RED}>>>${RESET_COLOUR} Building for ${GREEN}Windows Release${RESET_COLOUR} with the design of ${PURPLE}Qt6${RESET_COLOUR}.\n'
		@${CC} --build ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_BUILD_FOLDER}
		@printf '${RED}>>>${RESET_COLOUR} Packing release.\n'
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_BUILD_FOLDER}
		@${CC} --install ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_BUILD_FOLDER} --component portable
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_RELEASE_FOLDER} ShadyLauncher
		@${ZIP} ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_RELEASE_FILE} ShadyLauncher
		@mv -v ShadyLauncher ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_RELEASE_FOLDER}
		@mkdir -pv release
		@mv -v ${SHADYLAUNCHER_WINDOWS_QT6_RELEASE_RELEASE_FILE} release
		@printf '${RED}>>>${RESET_COLOUR} ${GREEN}Windows Release${RESET_COLOUR} ${PURPLE}Qt6${RESET_COLOUR} ready for launch.\n'

help:
		@printf "Available builds:\n"
		@printf " Linux:\n"
		@printf "  shadylauncher-linux-debug-qt5\n"
		@printf "  shadylauncher-linux-debug-qt6\n"
		@printf "  shadylauncher-linux-release-qt5\n"
		@printf "  shadylauncher-linux-release-qt6\n"
		@printf " Windows:\n"
		@printf "  shadylauncher-windows-debug-qt5\n"
		@printf "  shadylauncher-windows-debug-qt6\n"
		@printf "  shadylauncher-windows-release-qt5\n"
		@printf "  shadylauncher-windows-release-qt6\n"
		@printf "\nAll the builds will be ${BLUE}portable${RESET_COLOUR}.\n"

all:
		help()
