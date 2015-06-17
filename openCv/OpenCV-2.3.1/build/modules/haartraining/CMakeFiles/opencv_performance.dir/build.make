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

# Include any dependencies generated for this target.
include modules/haartraining/CMakeFiles/opencv_performance.dir/depend.make

# Include the progress variables for this target.
include modules/haartraining/CMakeFiles/opencv_performance.dir/progress.make

# Include the compile flags for this target's objects.
include modules/haartraining/CMakeFiles/opencv_performance.dir/flags.make

modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o: modules/haartraining/CMakeFiles/opencv_performance.dir/flags.make
modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o: ../modules/haartraining/performance.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/haartraining && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/opencv_performance.dir/performance.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/haartraining/performance.cpp

modules/haartraining/CMakeFiles/opencv_performance.dir/performance.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_performance.dir/performance.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/haartraining && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/haartraining/performance.cpp > CMakeFiles/opencv_performance.dir/performance.i

modules/haartraining/CMakeFiles/opencv_performance.dir/performance.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_performance.dir/performance.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/haartraining && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/haartraining/performance.cpp -o CMakeFiles/opencv_performance.dir/performance.s

modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.requires:
.PHONY : modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.requires

modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.provides: modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.requires
	$(MAKE) -f modules/haartraining/CMakeFiles/opencv_performance.dir/build.make modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.provides.build
.PHONY : modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.provides

modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.provides.build: modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o
.PHONY : modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.provides.build

# Object files for target opencv_performance
opencv_performance_OBJECTS = \
"CMakeFiles/opencv_performance.dir/performance.o"

# External object files for target opencv_performance
opencv_performance_EXTERNAL_OBJECTS =

bin/opencv_performance: modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o
bin/opencv_performance: lib/libopencv_core.so.2.3.1
bin/opencv_performance: lib/libopencv_imgproc.so.2.3.1
bin/opencv_performance: lib/libopencv_highgui.so.2.3.1
bin/opencv_performance: lib/libopencv_objdetect.so.2.3.1
bin/opencv_performance: lib/libopencv_calib3d.so.2.3.1
bin/opencv_performance: lib/libopencv_haartraining_engine.a
bin/opencv_performance: lib/libopencv_objdetect.so.2.3.1
bin/opencv_performance: lib/libopencv_calib3d.so.2.3.1
bin/opencv_performance: lib/libopencv_features2d.so.2.3.1
bin/opencv_performance: lib/libopencv_highgui.so.2.3.1
bin/opencv_performance: lib/libopencv_imgproc.so.2.3.1
bin/opencv_performance: lib/libopencv_flann.so.2.3.1
bin/opencv_performance: lib/libopencv_core.so.2.3.1
bin/opencv_performance: /usr/lib/libz.so
bin/opencv_performance: modules/haartraining/CMakeFiles/opencv_performance.dir/build.make
bin/opencv_performance: modules/haartraining/CMakeFiles/opencv_performance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/opencv_performance"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/haartraining && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_performance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/haartraining/CMakeFiles/opencv_performance.dir/build: bin/opencv_performance
.PHONY : modules/haartraining/CMakeFiles/opencv_performance.dir/build

modules/haartraining/CMakeFiles/opencv_performance.dir/requires: modules/haartraining/CMakeFiles/opencv_performance.dir/performance.o.requires
.PHONY : modules/haartraining/CMakeFiles/opencv_performance.dir/requires

modules/haartraining/CMakeFiles/opencv_performance.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/haartraining && $(CMAKE_COMMAND) -P CMakeFiles/opencv_performance.dir/cmake_clean.cmake
.PHONY : modules/haartraining/CMakeFiles/opencv_performance.dir/clean

modules/haartraining/CMakeFiles/opencv_performance.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/haartraining /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/haartraining /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/haartraining/CMakeFiles/opencv_performance.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/haartraining/CMakeFiles/opencv_performance.dir/depend

