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
CMAKE_SOURCE_DIR = /home/cbassuser/avnOpticalPointing/opencv-2.4.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build

# Include any dependencies generated for this target.
include modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/depend.make

# Include the progress variables for this target.
include modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/progress.make

# Include the compile flags for this target's objects.
include modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/flags.make

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o: modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/flags.make
modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o: modules/video/opencv_perf_video_pch_dephelp.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o -c /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.i"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx > CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.i

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.s"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx -o CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.s

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.requires:
.PHONY : modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.requires

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.provides: modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.requires
	$(MAKE) -f modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/build.make modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.provides.build
.PHONY : modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.provides

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.provides.build: modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o
.PHONY : modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.provides.build

modules/video/opencv_perf_video_pch_dephelp.cxx: ../modules/video/perf/perf_precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating opencv_perf_video_pch_dephelp.cxx"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/cmake -E echo \#include\ \"/home/cbassuser/avnOpticalPointing/opencv-2.4.9/modules/video/perf/perf_precomp.hpp\" > /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/cmake -E echo int\ testfunction\(\)\; >> /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/cmake -E echo int\ testfunction\(\) >> /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/cmake -E echo { >> /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/cmake -E echo \ \ \ \ \return\ 0\; >> /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && /usr/bin/cmake -E echo } >> /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/opencv_perf_video_pch_dephelp.cxx

# Object files for target opencv_perf_video_pch_dephelp
opencv_perf_video_pch_dephelp_OBJECTS = \
"CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o"

# External object files for target opencv_perf_video_pch_dephelp
opencv_perf_video_pch_dephelp_EXTERNAL_OBJECTS =

lib/libopencv_perf_video_pch_dephelp.a: modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o
lib/libopencv_perf_video_pch_dephelp.a: modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/build.make
lib/libopencv_perf_video_pch_dephelp.a: modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../lib/libopencv_perf_video_pch_dephelp.a"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && $(CMAKE_COMMAND) -P CMakeFiles/opencv_perf_video_pch_dephelp.dir/cmake_clean_target.cmake
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_perf_video_pch_dephelp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/build: lib/libopencv_perf_video_pch_dephelp.a
.PHONY : modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/build

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/requires: modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/opencv_perf_video_pch_dephelp.cxx.o.requires
.PHONY : modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/requires

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video && $(CMAKE_COMMAND) -P CMakeFiles/opencv_perf_video_pch_dephelp.dir/cmake_clean.cmake
.PHONY : modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/clean

modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/depend: modules/video/opencv_perf_video_pch_dephelp.cxx
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/opencv-2.4.9 /home/cbassuser/avnOpticalPointing/opencv-2.4.9/modules/video /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/video/CMakeFiles/opencv_perf_video_pch_dephelp.dir/depend

