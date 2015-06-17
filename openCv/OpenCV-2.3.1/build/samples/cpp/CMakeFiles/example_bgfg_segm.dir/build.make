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
include samples/cpp/CMakeFiles/example_bgfg_segm.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/example_bgfg_segm.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/example_bgfg_segm.dir/flags.make

samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o: samples/cpp/CMakeFiles/example_bgfg_segm.dir/flags.make
samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o: ../samples/cpp/bgfg_segm.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/bgfg_segm.cpp

samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_bgfg_segm.dir/bgfg_segm.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/bgfg_segm.cpp > CMakeFiles/example_bgfg_segm.dir/bgfg_segm.i

samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_bgfg_segm.dir/bgfg_segm.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/bgfg_segm.cpp -o CMakeFiles/example_bgfg_segm.dir/bgfg_segm.s

samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.requires:
.PHONY : samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.requires

samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.provides: samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/example_bgfg_segm.dir/build.make samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.provides.build
.PHONY : samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.provides

samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.provides.build: samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o
.PHONY : samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.provides.build

# Object files for target example_bgfg_segm
example_bgfg_segm_OBJECTS = \
"CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o"

# External object files for target example_bgfg_segm
example_bgfg_segm_EXTERNAL_OBJECTS =

bin/bgfg_segm: samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o
bin/bgfg_segm: lib/libopencv_core.so.2.3.1
bin/bgfg_segm: lib/libopencv_flann.so.2.3.1
bin/bgfg_segm: lib/libopencv_imgproc.so.2.3.1
bin/bgfg_segm: lib/libopencv_highgui.so.2.3.1
bin/bgfg_segm: lib/libopencv_ml.so.2.3.1
bin/bgfg_segm: lib/libopencv_video.so.2.3.1
bin/bgfg_segm: lib/libopencv_objdetect.so.2.3.1
bin/bgfg_segm: lib/libopencv_features2d.so.2.3.1
bin/bgfg_segm: lib/libopencv_calib3d.so.2.3.1
bin/bgfg_segm: lib/libopencv_legacy.so.2.3.1
bin/bgfg_segm: lib/libopencv_contrib.so.2.3.1
bin/bgfg_segm: lib/libopencv_ml.so.2.3.1
bin/bgfg_segm: lib/libopencv_video.so.2.3.1
bin/bgfg_segm: lib/libopencv_objdetect.so.2.3.1
bin/bgfg_segm: lib/libopencv_calib3d.so.2.3.1
bin/bgfg_segm: lib/libopencv_features2d.so.2.3.1
bin/bgfg_segm: lib/libopencv_flann.so.2.3.1
bin/bgfg_segm: lib/libopencv_highgui.so.2.3.1
bin/bgfg_segm: lib/libopencv_imgproc.so.2.3.1
bin/bgfg_segm: lib/libopencv_core.so.2.3.1
bin/bgfg_segm: /usr/lib/libz.so
bin/bgfg_segm: samples/cpp/CMakeFiles/example_bgfg_segm.dir/build.make
bin/bgfg_segm: samples/cpp/CMakeFiles/example_bgfg_segm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/bgfg_segm"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_bgfg_segm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/example_bgfg_segm.dir/build: bin/bgfg_segm
.PHONY : samples/cpp/CMakeFiles/example_bgfg_segm.dir/build

samples/cpp/CMakeFiles/example_bgfg_segm.dir/requires: samples/cpp/CMakeFiles/example_bgfg_segm.dir/bgfg_segm.o.requires
.PHONY : samples/cpp/CMakeFiles/example_bgfg_segm.dir/requires

samples/cpp/CMakeFiles/example_bgfg_segm.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/example_bgfg_segm.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/example_bgfg_segm.dir/clean

samples/cpp/CMakeFiles/example_bgfg_segm.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp/CMakeFiles/example_bgfg_segm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/example_bgfg_segm.dir/depend

