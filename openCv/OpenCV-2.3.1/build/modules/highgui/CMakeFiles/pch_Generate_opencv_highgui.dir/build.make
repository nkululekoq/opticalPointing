# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build

# Utility rule file for pch_Generate_opencv_highgui.

modules/highgui/CMakeFiles/pch_Generate_opencv_highgui: modules/highgui/precomp.hpp.gch/opencv_highgui_RELEASE.gch

modules/highgui/precomp.hpp.gch/opencv_highgui_RELEASE.gch: ../modules/highgui/src/precomp.hpp
modules/highgui/precomp.hpp.gch/opencv_highgui_RELEASE.gch: modules/highgui/precomp.hpp
modules/highgui/precomp.hpp.gch/opencv_highgui_RELEASE.gch: lib/libopencv_highgui_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp.gch/opencv_highgui_RELEASE.gch"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui && /usr/bin/cmake -E make_directory /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui/precomp.hpp.gch
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui && /usr/bin/c++ -O3 -DNDEBUG -fomit-frame-pointer -msse -msse2 -DNDEBUG -fPIC -I"/usr/lib/python2.6/dist-packages/numpy/core/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/." -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/include/opencv" -I"/usr/include" -I"/usr/include/gtk-2.0" -I"/usr/lib/gtk-2.0/include" -I"/usr/include/atk-1.0" -I"/usr/include/cairo" -I"/usr/include/pango-1.0" -I"/usr/include/gio-unix-2.0" -I"/usr/include/glib-2.0" -I"/usr/lib/glib-2.0/include" -I"/usr/include/pixman-1" -I"/usr/include/freetype2" -I"/usr/include/directfb" -I"/usr/include/libpng12" -I"/usr/include/gstreamer-0.10" -I"/usr/include/libxml2" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/highgui/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/highgui/../core/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/highgui/../imgproc/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/highgui/src" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui" -D PYTHON_USE_NUMPY=1 -DHAVE_CVCONFIG_H -DHAVE_JPEG -DHAVE_PNG -DHAVE_TIFF -DHAVE_JASPER -DHIGHGUI_EXPORTS -DCVAPI_EXPORTS -D PYTHON_USE_NUMPY=1 -DHAVE_CVCONFIG_H -Wall -Wno-long-long -pthread -ffunction-sections -x c++-header -o /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui/precomp.hpp.gch/opencv_highgui_RELEASE.gch /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui/precomp.hpp

modules/highgui/precomp.hpp: ../modules/highgui/src/precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui && /usr/bin/cmake -E copy /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/highgui/src/precomp.hpp /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui/precomp.hpp

pch_Generate_opencv_highgui: modules/highgui/CMakeFiles/pch_Generate_opencv_highgui
pch_Generate_opencv_highgui: modules/highgui/precomp.hpp.gch/opencv_highgui_RELEASE.gch
pch_Generate_opencv_highgui: modules/highgui/precomp.hpp
pch_Generate_opencv_highgui: modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/build.make
.PHONY : pch_Generate_opencv_highgui

# Rule to build all files generated by this target.
modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/build: pch_Generate_opencv_highgui
.PHONY : modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/build

modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_highgui.dir/cmake_clean.cmake
.PHONY : modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/clean

modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/highgui /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/highgui/CMakeFiles/pch_Generate_opencv_highgui.dir/depend

