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
include samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/flags.make

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o: samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/flags.make
samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o: samples/cpp/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o -c /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp > CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.i

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp -o CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.s

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.requires:
.PHONY : samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.requires

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.provides: samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/build.make samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.provides.build
.PHONY : samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.provides

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.provides.build: samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o
.PHONY : samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.provides.build

# Object files for target tutorial_introduction_windows_vs
tutorial_introduction_windows_vs_OBJECTS = \
"CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o"

# External object files for target tutorial_introduction_windows_vs
tutorial_introduction_windows_vs_EXTERNAL_OBJECTS =

bin/cpp-tutorial-introduction_windows_vs: samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_core.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_flann.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_imgproc.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_highgui.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_ml.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_video.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_objdetect.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_photo.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_nonfree.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_features2d.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_calib3d.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_legacy.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_contrib.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_stitching.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_videostab.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_gpu.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_ocl.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_nonfree.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_ocl.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_gpu.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_objdetect.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_photo.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_legacy.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_ml.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_video.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_calib3d.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_features2d.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_flann.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_highgui.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_imgproc.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: lib/libopencv_core.so.2.4.11
bin/cpp-tutorial-introduction_windows_vs: samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/build.make
bin/cpp-tutorial-introduction_windows_vs: samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/cpp-tutorial-introduction_windows_vs"
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tutorial_introduction_windows_vs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/build: bin/cpp-tutorial-introduction_windows_vs
.PHONY : samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/build

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/requires: samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/tutorial_code/introduction/windows_visual_studio_Opencv/introduction_windows_vs.cpp.o.requires
.PHONY : samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/requires

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/tutorial_introduction_windows_vs.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/clean

samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11 /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV/opencv-2.4.11/samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/tutorial_introduction_windows_vs.dir/depend

