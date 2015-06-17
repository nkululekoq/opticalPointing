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
include samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/depend.make

# Include the progress variables for this target.
include samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/progress.make

# Include the compile flags for this target's objects.
include samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/flags.make

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o: samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/flags.make
samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o: ../samples/gpu/alpha_comp.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/gpu && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o -c /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/gpu/alpha_comp.cpp

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.i"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/gpu && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/gpu/alpha_comp.cpp > CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.i

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.s"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/gpu && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/gpu/alpha_comp.cpp -o CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.s

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.requires:
.PHONY : samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.requires

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.provides: samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.requires
	$(MAKE) -f samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/build.make samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.provides.build
.PHONY : samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.provides

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.provides.build: samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o
.PHONY : samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.provides.build

# Object files for target example_gpu_alpha_comp
example_gpu_alpha_comp_OBJECTS = \
"CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o"

# External object files for target example_gpu_alpha_comp
example_gpu_alpha_comp_EXTERNAL_OBJECTS =

bin/gpu-example-alpha_comp: samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o
bin/gpu-example-alpha_comp: lib/libopencv_core.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_flann.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_imgproc.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_highgui.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_ml.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_video.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_objdetect.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_features2d.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_calib3d.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_legacy.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_contrib.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_gpu.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_superres.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_nonfree.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_ocl.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_gpu.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_legacy.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_ml.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_video.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_objdetect.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_calib3d.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_features2d.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_flann.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_highgui.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_photo.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_imgproc.so.2.4.9
bin/gpu-example-alpha_comp: lib/libopencv_core.so.2.4.9
bin/gpu-example-alpha_comp: samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/build.make
bin/gpu-example-alpha_comp: samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/gpu-example-alpha_comp"
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/gpu && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_gpu_alpha_comp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/build: bin/gpu-example-alpha_comp
.PHONY : samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/build

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/requires: samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/alpha_comp.cpp.o.requires
.PHONY : samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/requires

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/gpu && $(CMAKE_COMMAND) -P CMakeFiles/example_gpu_alpha_comp.dir/cmake_clean.cmake
.PHONY : samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/clean

samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/opencv-2.4.9 /home/cbassuser/avnOpticalPointing/opencv-2.4.9/samples/gpu /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/gpu /home/cbassuser/avnOpticalPointing/opencv-2.4.9/build/samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/gpu/CMakeFiles/example_gpu_alpha_comp.dir/depend

