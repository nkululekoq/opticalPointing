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

# Utility rule file for pch_Generate_opencv_ts.

modules/ts/CMakeFiles/pch_Generate_opencv_ts: modules/ts/precomp.hpp.gch/opencv_ts_RELEASE.gch

modules/ts/precomp.hpp.gch/opencv_ts_RELEASE.gch: ../modules/ts/src/precomp.hpp
modules/ts/precomp.hpp.gch/opencv_ts_RELEASE.gch: modules/ts/precomp.hpp
modules/ts/precomp.hpp.gch/opencv_ts_RELEASE.gch: lib/libopencv_ts_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp.gch/opencv_ts_RELEASE.gch"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/cmake -E make_directory /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp.gch
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++ -O3 -DNDEBUG -fomit-frame-pointer -msse -msse2 -DNDEBUG -fPIC -I"/usr/lib/python2.6/dist-packages/numpy/core/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/." -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/include/opencv" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/../core/include" -D PYTHON_USE_NUMPY=1 -DHAVE_CVCONFIG_H -DGTEST_CREATE_SHARED_LIBRARY=1 -DCVAPI_EXPORTS -D PYTHON_USE_NUMPY=1 -DHAVE_CVCONFIG_H -Wall -Wno-long-long -pthread -ffunction-sections -x c++-header -o /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp.gch/opencv_ts_RELEASE.gch /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp

modules/ts/precomp.hpp: ../modules/ts/src/precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/cmake -E copy /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/precomp.hpp /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp

pch_Generate_opencv_ts: modules/ts/CMakeFiles/pch_Generate_opencv_ts
pch_Generate_opencv_ts: modules/ts/precomp.hpp.gch/opencv_ts_RELEASE.gch
pch_Generate_opencv_ts: modules/ts/precomp.hpp
pch_Generate_opencv_ts: modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/build.make
.PHONY : pch_Generate_opencv_ts

# Rule to build all files generated by this target.
modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/build: pch_Generate_opencv_ts
.PHONY : modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/build

modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_ts.dir/cmake_clean.cmake
.PHONY : modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/clean

modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/ts/CMakeFiles/pch_Generate_opencv_ts.dir/depend

