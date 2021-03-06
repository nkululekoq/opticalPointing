# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. Example variables are:
#   CPACK_GENERATOR                     - Generator used to create package
#   CPACK_INSTALL_CMAKE_PROJECTS        - For each project (path, name, component)
#   CPACK_CMAKE_GENERATOR               - CMake Generator used for the projects
#   CPACK_INSTALL_COMMANDS              - Extra commands to install components
#   CPACK_INSTALL_DIRECTORIES           - Extra directories to install
#   CPACK_PACKAGE_DESCRIPTION_FILE      - Description file for the package
#   CPACK_PACKAGE_DESCRIPTION_SUMMARY   - Summary of the package
#   CPACK_PACKAGE_EXECUTABLES           - List of pairs of executables and labels
#   CPACK_PACKAGE_FILE_NAME             - Name of the package generated
#   CPACK_PACKAGE_ICON                  - Icon used for the package
#   CPACK_PACKAGE_INSTALL_DIRECTORY     - Name of directory for the installer
#   CPACK_PACKAGE_NAME                  - Package project name
#   CPACK_PACKAGE_VENDOR                - Package project vendor
#   CPACK_PACKAGE_VERSION               - Package project version
#   CPACK_PACKAGE_VERSION_MAJOR         - Package project version (major)
#   CPACK_PACKAGE_VERSION_MINOR         - Package project version (minor)
#   CPACK_PACKAGE_VERSION_PATCH         - Package project version (patch)

# There are certain generator specific ones

# NSIS Generator:
#   CPACK_PACKAGE_INSTALL_REGISTRY_KEY  - Name of the registry key for the installer
#   CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS - Extra commands used during uninstall
#   CPACK_NSIS_EXTRA_INSTALL_COMMANDS   - Extra commands used during install


SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "OFF")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_NSIS "OFF")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_RPM "OFF")
SET(CPACK_BINARY_STGZ "ON")
SET(CPACK_BINARY_TBZ2 "OFF")
SET(CPACK_BINARY_TGZ "ON")
SET(CPACK_BINARY_TZ "ON")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENTS_ALL "dev;docs;libs;python")
SET(CPACK_COMPONENT_DEV_DEPENDS "libs")
SET(CPACK_COMPONENT_DEV_DESCRIPTION "Development files for Open Source Computer Vision Library")
SET(CPACK_COMPONENT_DEV_DISPLAY_NAME "Development files")
SET(CPACK_COMPONENT_DOCS_DEPENDS "libs")
SET(CPACK_COMPONENT_DOCS_DESCRIPTION "Documentation for Open Source Computer Vision Library")
SET(CPACK_COMPONENT_DOCS_DISPLAY_NAME "Documentation")
SET(CPACK_COMPONENT_JAVA_DEPENDS "libs")
SET(CPACK_COMPONENT_JAVA_DESCRIPTION "Java bindings for Open Source Computer Vision Library")
SET(CPACK_COMPONENT_JAVA_DISPLAY_NAME "Java bindings")
SET(CPACK_COMPONENT_LIBS_DESCRIPTION "Open Computer Vision Library")
SET(CPACK_COMPONENT_LIBS_DISPLAY_NAME "Libraries and data")
SET(CPACK_COMPONENT_LIBS_REQUIRED "TRUE")
SET(CPACK_COMPONENT_PYTHON_DEPENDS "libs")
SET(CPACK_COMPONENT_PYTHON_DESCRIPTION "Python bindings for Open Source Computer Vision Library")
SET(CPACK_COMPONENT_PYTHON_DISPLAY_NAME "Python bindings")
SET(CPACK_COMPONENT_SAMPLES_DEPENDS "libs;dev")
SET(CPACK_COMPONENT_SAMPLES_DESCRIPTION "Samples for Open Source Computer Vision Library")
SET(CPACK_COMPONENT_SAMPLES_DISPLAY_NAME "Samples")
SET(CPACK_COMPONENT_TESTS_DEPENDS "libs")
SET(CPACK_COMPONENT_TESTS_DESCRIPTION "Accuracy and performance tests for Open Source Computer Vision Library")
SET(CPACK_COMPONENT_TESTS_DISPLAY_NAME "Tests")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_DEBIAN_ARCHITECTURE "amd64")
SET(CPACK_DEBIAN_COMPONENT_DEV_NAME "libopencv-dev")
SET(CPACK_DEBIAN_COMPONENT_DEV_SECTION "libdevel")
SET(CPACK_DEBIAN_COMPONENT_DOCS_NAME "libopencv-docs")
SET(CPACK_DEBIAN_COMPONENT_DOCS_SECTION "doc")
SET(CPACK_DEBIAN_COMPONENT_JAVA_NAME "libopencv-java")
SET(CPACK_DEBIAN_COMPONENT_JAVA_SECTION "java")
SET(CPACK_DEBIAN_COMPONENT_LIBS_NAME "libopencv")
SET(CPACK_DEBIAN_COMPONENT_LIBS_SECTION "libs")
SET(CPACK_DEBIAN_COMPONENT_PYTHON_NAME "libopencv-python")
SET(CPACK_DEBIAN_COMPONENT_PYTHON_SECTION "python")
SET(CPACK_DEBIAN_COMPONENT_SAMPLES_NAME "libopencv-samples")
SET(CPACK_DEBIAN_COMPONENT_SAMPLES_SECTION "devel")
SET(CPACK_DEBIAN_COMPONENT_TESTS_NAME "libopencv-tests")
SET(CPACK_DEBIAN_COMPONENT_TESTS_SECTION "misc")
SET(CPACK_DEBIAN_PACKAGE_HOMEPAGE "http://opencv.org")
SET(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
SET(CPACK_DEBIAN_PACKAGE_SECTION "libs")
SET(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "TRUE")
SET(CPACK_DEB_COMPONENT_INSTALL "TRUE")
SET(CPACK_DEB_PYTHON_PACKAGE_DEPENDS "python-numpy (>=1.3.0), python2.6")
SET(CPACK_DEB_TESTS_PACKAGE_DEPENDS "python-numpy (>=1.3.0), python2.6, python-py | python-pytest")
SET(CPACK_GENERATOR "TGZ;TBZ2;TZ")
SET(CPACK_IGNORE_FILES "/CVS/;/\\.svn/;\\.swp$;\\.#;/#")
SET(CPACK_INSTALLED_DIRECTORIES "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11;/")
SET(CPACK_INSTALL_CMAKE_PROJECTS "")
SET(CPACK_INSTALL_PREFIX "/usr/local")
SET(CPACK_MODULE_PATH "")
SET(CPACK_NSIS_DISPLAY_NAME "OpenCV unknown")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_PACKAGE_NAME "OpenCV unknown")
SET(CPACK_OUTPUT_CONFIG_FILE "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/CPackConfig.cmake")
SET(CPACK_PACKAGE_CONTACT "OpenCV Developers <admin@opencv.org>")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION "OpenCV (Open Source Computer Vision Library) is an open source computer vision
and machine learning software library. OpenCV was built to provide a common
infrastructure for computer vision applications and to accelerate the use of
machine perception in the commercial products. Being a BSD-licensed product,
OpenCV makes it easy for businesses to utilize and modify the code.")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-2.8/Templates/CPack.GenericDescription.txt")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Open Computer Vision Library")
SET(CPACK_PACKAGE_FILE_NAME "OpenCV-unknown-x86_64")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "OpenCV unknown")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "OpenCV unknown")
SET(CPACK_PACKAGE_NAME "OpenCV")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "OpenCV Foundation")
SET(CPACK_PACKAGE_VERSION "unknown")
SET(CPACK_PACKAGE_VERSION_MAJOR "2")
SET(CPACK_PACKAGE_VERSION_MINOR "4")
SET(CPACK_PACKAGE_VERSION_PATCH "11")
SET(CPACK_RESOURCE_FILE_LICENSE "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/LICENSE")
SET(CPACK_RESOURCE_FILE_README "/usr/share/cmake-2.8/Templates/CPack.GenericDescription.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-2.8/Templates/CPack.GenericWelcome.txt")
SET(CPACK_RPM_COMPONENT_INSTALL "TRUE")
SET(CPACK_RPM_PACKAGE_ARCHITECTURE "x86_64")
SET(CPACK_RPM_PACKAGE_DESCRIPTION "OpenCV (Open Source Computer Vision Library) is an open source computer vision
and machine learning software library. OpenCV was built to provide a common
infrastructure for computer vision applications and to accelerate the use of
machine perception in the commercial products. Being a BSD-licensed product,
OpenCV makes it easy for businesses to utilize and modify the code.")
SET(CPACK_RPM_PACKAGE_LICENSE "BSD")
SET(CPACK_RPM_PACKAGE_SUMMARY "Open Computer Vision Library")
SET(CPACK_RPM_PACKAGE_URL "http://opencv.org")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TGZ;TBZ2;TZ")
SET(CPACK_SOURCE_IGNORE_FILES "/CVS/;/\\.svn/;\\.swp$;\\.#;/#")
SET(CPACK_SOURCE_INSTALLED_DIRECTORIES "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11;/")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_PACKAGE_FILE_NAME "OpenCV-unknown-x86_64")
SET(CPACK_SOURCE_TBZ2 "ON")
SET(CPACK_SOURCE_TGZ "ON")
SET(CPACK_SOURCE_TOPLEVEL_TAG "Linux-Source")
SET(CPACK_SOURCE_TZ "ON")
SET(CPACK_SOURCE_ZIP "OFF")
SET(CPACK_STRIP_FILES "")
SET(CPACK_SYSTEM_NAME "Linux")
SET(CPACK_TOPLEVEL_TAG "Linux-Source")
SET(CPACK_set_DESTDIR "on")
