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
include samples/c/CMakeFiles/example_find_obj.dir/depend.make

# Include the progress variables for this target.
include samples/c/CMakeFiles/example_find_obj.dir/progress.make

# Include the compile flags for this target's objects.
include samples/c/CMakeFiles/example_find_obj.dir/flags.make

samples/c/CMakeFiles/example_find_obj.dir/find_obj.o: samples/c/CMakeFiles/example_find_obj.dir/flags.make
samples/c/CMakeFiles/example_find_obj.dir/find_obj.o: ../samples/c/find_obj.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/c/CMakeFiles/example_find_obj.dir/find_obj.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/c && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_find_obj.dir/find_obj.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/find_obj.cpp

samples/c/CMakeFiles/example_find_obj.dir/find_obj.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_find_obj.dir/find_obj.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/c && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/find_obj.cpp > CMakeFiles/example_find_obj.dir/find_obj.i

samples/c/CMakeFiles/example_find_obj.dir/find_obj.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_find_obj.dir/find_obj.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/c && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/find_obj.cpp -o CMakeFiles/example_find_obj.dir/find_obj.s

samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.requires:
.PHONY : samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.requires

samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.provides: samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.requires
	$(MAKE) -f samples/c/CMakeFiles/example_find_obj.dir/build.make samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.provides.build
.PHONY : samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.provides

samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.provides.build: samples/c/CMakeFiles/example_find_obj.dir/find_obj.o
.PHONY : samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.provides.build

# Object files for target example_find_obj
example_find_obj_OBJECTS = \
"CMakeFiles/example_find_obj.dir/find_obj.o"

# External object files for target example_find_obj
example_find_obj_EXTERNAL_OBJECTS =

bin/find_obj: samples/c/CMakeFiles/example_find_obj.dir/find_obj.o
bin/find_obj: lib/libopencv_core.so.2.3.1
bin/find_obj: lib/libopencv_flann.so.2.3.1
bin/find_obj: lib/libopencv_imgproc.so.2.3.1
bin/find_obj: lib/libopencv_highgui.so.2.3.1
bin/find_obj: lib/libopencv_ml.so.2.3.1
bin/find_obj: lib/libopencv_video.so.2.3.1
bin/find_obj: lib/libopencv_objdetect.so.2.3.1
bin/find_obj: lib/libopencv_features2d.so.2.3.1
bin/find_obj: lib/libopencv_calib3d.so.2.3.1
bin/find_obj: lib/libopencv_legacy.so.2.3.1
bin/find_obj: lib/libopencv_contrib.so.2.3.1
bin/find_obj: lib/libopencv_ml.so.2.3.1
bin/find_obj: lib/libopencv_video.so.2.3.1
bin/find_obj: lib/libopencv_objdetect.so.2.3.1
bin/find_obj: lib/libopencv_calib3d.so.2.3.1
bin/find_obj: lib/libopencv_features2d.so.2.3.1
bin/find_obj: lib/libopencv_flann.so.2.3.1
bin/find_obj: lib/libopencv_highgui.so.2.3.1
bin/find_obj: lib/libopencv_imgproc.so.2.3.1
bin/find_obj: lib/libopencv_core.so.2.3.1
bin/find_obj: /usr/lib/libz.so
bin/find_obj: samples/c/CMakeFiles/example_find_obj.dir/build.make
bin/find_obj: samples/c/CMakeFiles/example_find_obj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/find_obj"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/c && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_find_obj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/c/CMakeFiles/example_find_obj.dir/build: bin/find_obj
.PHONY : samples/c/CMakeFiles/example_find_obj.dir/build

samples/c/CMakeFiles/example_find_obj.dir/requires: samples/c/CMakeFiles/example_find_obj.dir/find_obj.o.requires
.PHONY : samples/c/CMakeFiles/example_find_obj.dir/requires

samples/c/CMakeFiles/example_find_obj.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/c && $(CMAKE_COMMAND) -P CMakeFiles/example_find_obj.dir/cmake_clean.cmake
.PHONY : samples/c/CMakeFiles/example_find_obj.dir/clean

samples/c/CMakeFiles/example_find_obj.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/c/CMakeFiles/example_find_obj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/c/CMakeFiles/example_find_obj.dir/depend

