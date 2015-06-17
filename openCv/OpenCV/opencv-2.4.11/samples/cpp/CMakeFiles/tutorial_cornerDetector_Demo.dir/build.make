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
include samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/flags.make

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o: samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/flags.make
samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o: samples/cpp/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o -c /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp > CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.i

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp -o CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.s

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.requires:
.PHONY : samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.requires

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.provides: samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/build.make samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.provides.build
.PHONY : samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.provides

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.provides.build: samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o
.PHONY : samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.provides.build

# Object files for target tutorial_cornerDetector_Demo
tutorial_cornerDetector_Demo_OBJECTS = \
"CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o"

# External object files for target tutorial_cornerDetector_Demo
tutorial_cornerDetector_Demo_EXTERNAL_OBJECTS =

bin/cpp-tutorial-cornerDetector_Demo: samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_core.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_flann.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_imgproc.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_highgui.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_ml.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_video.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_objdetect.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_photo.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_nonfree.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_features2d.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_calib3d.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_legacy.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_contrib.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_stitching.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_videostab.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_gpu.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_ocl.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_nonfree.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_ocl.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_gpu.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_objdetect.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_photo.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_legacy.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_ml.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_video.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_calib3d.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_features2d.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_flann.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_highgui.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_imgproc.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: lib/libopencv_core.so.2.4.11
bin/cpp-tutorial-cornerDetector_Demo: samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/build.make
bin/cpp-tutorial-cornerDetector_Demo: samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/cpp-tutorial-cornerDetector_Demo"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tutorial_cornerDetector_Demo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/build: bin/cpp-tutorial-cornerDetector_Demo
.PHONY : samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/build

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/requires: samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/tutorial_code/TrackingMotion/cornerDetector_Demo.cpp.o.requires
.PHONY : samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/requires

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/tutorial_cornerDetector_Demo.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/clean

samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/tutorial_cornerDetector_Demo.dir/depend

