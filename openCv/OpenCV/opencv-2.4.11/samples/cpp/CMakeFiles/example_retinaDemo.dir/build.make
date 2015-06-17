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
CMAKE_SOURCE_DIR = /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11

# Include any dependencies generated for this target.
include samples/cpp/CMakeFiles/example_retinaDemo.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/example_retinaDemo.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/example_retinaDemo.dir/flags.make

samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o: samples/cpp/CMakeFiles/example_retinaDemo.dir/flags.make
samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o: samples/cpp/retinaDemo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o -c /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/retinaDemo.cpp

samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/retinaDemo.cpp > CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.i

samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/retinaDemo.cpp -o CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.s

samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.requires:
.PHONY : samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.requires

samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.provides: samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/example_retinaDemo.dir/build.make samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.provides.build
.PHONY : samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.provides

samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.provides.build: samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o
.PHONY : samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.provides.build

# Object files for target example_retinaDemo
example_retinaDemo_OBJECTS = \
"CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o"

# External object files for target example_retinaDemo
example_retinaDemo_EXTERNAL_OBJECTS =

bin/cpp-example-retinaDemo: samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o
bin/cpp-example-retinaDemo: lib/libopencv_core.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_flann.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_imgproc.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_highgui.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_ml.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_video.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_objdetect.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_photo.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_nonfree.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_features2d.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_calib3d.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_legacy.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_contrib.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_stitching.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_videostab.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_gpu.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_ocl.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_nonfree.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_ocl.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_gpu.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_objdetect.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_photo.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_legacy.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_ml.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_video.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_calib3d.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_features2d.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_flann.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_highgui.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_imgproc.so.2.4.11
bin/cpp-example-retinaDemo: lib/libopencv_core.so.2.4.11
bin/cpp-example-retinaDemo: samples/cpp/CMakeFiles/example_retinaDemo.dir/build.make
bin/cpp-example-retinaDemo: samples/cpp/CMakeFiles/example_retinaDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/cpp-example-retinaDemo"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_retinaDemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/example_retinaDemo.dir/build: bin/cpp-example-retinaDemo
.PHONY : samples/cpp/CMakeFiles/example_retinaDemo.dir/build

samples/cpp/CMakeFiles/example_retinaDemo.dir/requires: samples/cpp/CMakeFiles/example_retinaDemo.dir/retinaDemo.cpp.o.requires
.PHONY : samples/cpp/CMakeFiles/example_retinaDemo.dir/requires

samples/cpp/CMakeFiles/example_retinaDemo.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/example_retinaDemo.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/example_retinaDemo.dir/clean

samples/cpp/CMakeFiles/example_retinaDemo.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/CMakeFiles/example_retinaDemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/example_retinaDemo.dir/depend

