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
include samples/ocl/CMakeFiles/example_ocl_squares.dir/depend.make

# Include the progress variables for this target.
include samples/ocl/CMakeFiles/example_ocl_squares.dir/progress.make

# Include the compile flags for this target's objects.
include samples/ocl/CMakeFiles/example_ocl_squares.dir/flags.make

samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o: samples/ocl/CMakeFiles/example_ocl_squares.dir/flags.make
samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o: samples/ocl/squares.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_ocl_squares.dir/squares.cpp.o -c /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl/squares.cpp

samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_ocl_squares.dir/squares.cpp.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl/squares.cpp > CMakeFiles/example_ocl_squares.dir/squares.cpp.i

samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_ocl_squares.dir/squares.cpp.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl/squares.cpp -o CMakeFiles/example_ocl_squares.dir/squares.cpp.s

samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.requires:
.PHONY : samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.requires

samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.provides: samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.requires
	$(MAKE) -f samples/ocl/CMakeFiles/example_ocl_squares.dir/build.make samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.provides.build
.PHONY : samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.provides

samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.provides.build: samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o
.PHONY : samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.provides.build

# Object files for target example_ocl_squares
example_ocl_squares_OBJECTS = \
"CMakeFiles/example_ocl_squares.dir/squares.cpp.o"

# External object files for target example_ocl_squares
example_ocl_squares_EXTERNAL_OBJECTS =

bin/ocl-example-squares: samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o
bin/ocl-example-squares: lib/libopencv_core.so.2.4.11
bin/ocl-example-squares: lib/libopencv_flann.so.2.4.11
bin/ocl-example-squares: lib/libopencv_imgproc.so.2.4.11
bin/ocl-example-squares: lib/libopencv_highgui.so.2.4.11
bin/ocl-example-squares: lib/libopencv_ml.so.2.4.11
bin/ocl-example-squares: lib/libopencv_video.so.2.4.11
bin/ocl-example-squares: lib/libopencv_objdetect.so.2.4.11
bin/ocl-example-squares: lib/libopencv_features2d.so.2.4.11
bin/ocl-example-squares: lib/libopencv_calib3d.so.2.4.11
bin/ocl-example-squares: lib/libopencv_legacy.so.2.4.11
bin/ocl-example-squares: lib/libopencv_contrib.so.2.4.11
bin/ocl-example-squares: lib/libopencv_ocl.so.2.4.11
bin/ocl-example-squares: lib/libopencv_nonfree.so.2.4.11
bin/ocl-example-squares: lib/libopencv_ocl.so.2.4.11
bin/ocl-example-squares: lib/libopencv_gpu.so.2.4.11
bin/ocl-example-squares: lib/libopencv_objdetect.so.2.4.11
bin/ocl-example-squares: lib/libopencv_legacy.so.2.4.11
bin/ocl-example-squares: lib/libopencv_ml.so.2.4.11
bin/ocl-example-squares: lib/libopencv_video.so.2.4.11
bin/ocl-example-squares: lib/libopencv_calib3d.so.2.4.11
bin/ocl-example-squares: lib/libopencv_features2d.so.2.4.11
bin/ocl-example-squares: lib/libopencv_flann.so.2.4.11
bin/ocl-example-squares: lib/libopencv_highgui.so.2.4.11
bin/ocl-example-squares: lib/libopencv_photo.so.2.4.11
bin/ocl-example-squares: lib/libopencv_imgproc.so.2.4.11
bin/ocl-example-squares: lib/libopencv_core.so.2.4.11
bin/ocl-example-squares: samples/ocl/CMakeFiles/example_ocl_squares.dir/build.make
bin/ocl-example-squares: samples/ocl/CMakeFiles/example_ocl_squares.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/ocl-example-squares"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_ocl_squares.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/ocl/CMakeFiles/example_ocl_squares.dir/build: bin/ocl-example-squares
.PHONY : samples/ocl/CMakeFiles/example_ocl_squares.dir/build

samples/ocl/CMakeFiles/example_ocl_squares.dir/requires: samples/ocl/CMakeFiles/example_ocl_squares.dir/squares.cpp.o.requires
.PHONY : samples/ocl/CMakeFiles/example_ocl_squares.dir/requires

samples/ocl/CMakeFiles/example_ocl_squares.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl && $(CMAKE_COMMAND) -P CMakeFiles/example_ocl_squares.dir/cmake_clean.cmake
.PHONY : samples/ocl/CMakeFiles/example_ocl_squares.dir/clean

samples/ocl/CMakeFiles/example_ocl_squares.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/ocl/CMakeFiles/example_ocl_squares.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/ocl/CMakeFiles/example_ocl_squares.dir/depend

