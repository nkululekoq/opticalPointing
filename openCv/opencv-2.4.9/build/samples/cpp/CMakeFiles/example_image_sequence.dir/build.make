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
include samples/cpp/CMakeFiles/example_image_sequence.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/example_image_sequence.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/example_image_sequence.dir/flags.make

samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o: samples/cpp/CMakeFiles/example_image_sequence.dir/flags.make
samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o: ../samples/cpp/image_sequence.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o -c /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/cpp/image_sequence.cpp

samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_image_sequence.dir/image_sequence.cpp.i"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/cpp/image_sequence.cpp > CMakeFiles/example_image_sequence.dir/image_sequence.cpp.i

samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_image_sequence.dir/image_sequence.cpp.s"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/cpp/image_sequence.cpp -o CMakeFiles/example_image_sequence.dir/image_sequence.cpp.s

samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.requires:
.PHONY : samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.requires

samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.provides: samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/example_image_sequence.dir/build.make samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.provides.build
.PHONY : samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.provides

samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.provides.build: samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o
.PHONY : samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.provides.build

# Object files for target example_image_sequence
example_image_sequence_OBJECTS = \
"CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o"

# External object files for target example_image_sequence
example_image_sequence_EXTERNAL_OBJECTS =

bin/cpp-example-image_sequence: samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o
bin/cpp-example-image_sequence: lib/libopencv_core.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_flann.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_imgproc.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_highgui.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_ml.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_video.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_objdetect.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_photo.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_nonfree.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_features2d.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_calib3d.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_legacy.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_contrib.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_stitching.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_videostab.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_gpu.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_ocl.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_nonfree.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_ocl.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_gpu.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_objdetect.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_photo.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_legacy.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_ml.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_video.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_calib3d.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_features2d.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_flann.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_highgui.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_imgproc.so.2.4.9
bin/cpp-example-image_sequence: lib/libopencv_core.so.2.4.9
bin/cpp-example-image_sequence: samples/cpp/CMakeFiles/example_image_sequence.dir/build.make
bin/cpp-example-image_sequence: samples/cpp/CMakeFiles/example_image_sequence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/cpp-example-image_sequence"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_image_sequence.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/example_image_sequence.dir/build: bin/cpp-example-image_sequence
.PHONY : samples/cpp/CMakeFiles/example_image_sequence.dir/build

samples/cpp/CMakeFiles/example_image_sequence.dir/requires: samples/cpp/CMakeFiles/example_image_sequence.dir/image_sequence.cpp.o.requires
.PHONY : samples/cpp/CMakeFiles/example_image_sequence.dir/requires

samples/cpp/CMakeFiles/example_image_sequence.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/example_image_sequence.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/example_image_sequence.dir/clean

samples/cpp/CMakeFiles/example_image_sequence.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/opencv-2.4.9 /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/cpp /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/cpp /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/cpp/CMakeFiles/example_image_sequence.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/example_image_sequence.dir/depend

