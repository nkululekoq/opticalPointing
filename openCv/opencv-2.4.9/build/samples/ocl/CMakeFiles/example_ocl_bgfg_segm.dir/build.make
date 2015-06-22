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
include samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/depend.make

# Include the progress variables for this target.
include samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/progress.make

# Include the compile flags for this target's objects.
include samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/flags.make

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o: samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/flags.make
samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o: ../samples/ocl/bgfg_segm.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/ocl && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o -c /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/ocl/bgfg_segm.cpp

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.i"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/ocl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/ocl/bgfg_segm.cpp > CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.i

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.s"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/ocl && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/ocl/bgfg_segm.cpp -o CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.s

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.requires:
.PHONY : samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.requires

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.provides: samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.requires
	$(MAKE) -f samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/build.make samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.provides.build
.PHONY : samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.provides

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.provides.build: samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o
.PHONY : samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.provides.build

# Object files for target example_ocl_bgfg_segm
example_ocl_bgfg_segm_OBJECTS = \
"CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o"

# External object files for target example_ocl_bgfg_segm
example_ocl_bgfg_segm_EXTERNAL_OBJECTS =

bin/ocl-example-bgfg_segm: samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o
bin/ocl-example-bgfg_segm: lib/libopencv_core.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_flann.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_imgproc.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_highgui.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_ml.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_video.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_objdetect.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_features2d.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_calib3d.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_legacy.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_contrib.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_ocl.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_nonfree.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_ocl.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_gpu.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_objdetect.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_legacy.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_ml.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_video.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_calib3d.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_features2d.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_flann.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_highgui.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_photo.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_imgproc.so.2.4.9
bin/ocl-example-bgfg_segm: lib/libopencv_core.so.2.4.9
bin/ocl-example-bgfg_segm: samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/build.make
bin/ocl-example-bgfg_segm: samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/ocl-example-bgfg_segm"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/ocl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_ocl_bgfg_segm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/build: bin/ocl-example-bgfg_segm
.PHONY : samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/build

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/requires: samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/bgfg_segm.cpp.o.requires
.PHONY : samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/requires

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/ocl && $(CMAKE_COMMAND) -P CMakeFiles/example_ocl_bgfg_segm.dir/cmake_clean.cmake
.PHONY : samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/clean

samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/opencv-2.4.9 /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/ocl /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/ocl /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/ocl/CMakeFiles/example_ocl_bgfg_segm.dir/depend

