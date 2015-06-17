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
include samples/cpp/CMakeFiles/example_grabcut.dir/depend.make

# Include the progress variables for this target.
include samples/cpp/CMakeFiles/example_grabcut.dir/progress.make

# Include the compile flags for this target's objects.
include samples/cpp/CMakeFiles/example_grabcut.dir/flags.make

samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o: samples/cpp/CMakeFiles/example_grabcut.dir/flags.make
samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o: ../samples/cpp/grabcut.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example_grabcut.dir/grabcut.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/grabcut.cpp

samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example_grabcut.dir/grabcut.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/grabcut.cpp > CMakeFiles/example_grabcut.dir/grabcut.i

samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example_grabcut.dir/grabcut.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/grabcut.cpp -o CMakeFiles/example_grabcut.dir/grabcut.s

samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.requires:
.PHONY : samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.requires

samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.provides: samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.requires
	$(MAKE) -f samples/cpp/CMakeFiles/example_grabcut.dir/build.make samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.provides.build
.PHONY : samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.provides

samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.provides.build: samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o
.PHONY : samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.provides.build

# Object files for target example_grabcut
example_grabcut_OBJECTS = \
"CMakeFiles/example_grabcut.dir/grabcut.o"

# External object files for target example_grabcut
example_grabcut_EXTERNAL_OBJECTS =

bin/grabcut: samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o
bin/grabcut: lib/libopencv_core.so.2.3.1
bin/grabcut: lib/libopencv_flann.so.2.3.1
bin/grabcut: lib/libopencv_imgproc.so.2.3.1
bin/grabcut: lib/libopencv_highgui.so.2.3.1
bin/grabcut: lib/libopencv_ml.so.2.3.1
bin/grabcut: lib/libopencv_video.so.2.3.1
bin/grabcut: lib/libopencv_objdetect.so.2.3.1
bin/grabcut: lib/libopencv_features2d.so.2.3.1
bin/grabcut: lib/libopencv_calib3d.so.2.3.1
bin/grabcut: lib/libopencv_legacy.so.2.3.1
bin/grabcut: lib/libopencv_contrib.so.2.3.1
bin/grabcut: lib/libopencv_ml.so.2.3.1
bin/grabcut: lib/libopencv_video.so.2.3.1
bin/grabcut: lib/libopencv_objdetect.so.2.3.1
bin/grabcut: lib/libopencv_calib3d.so.2.3.1
bin/grabcut: lib/libopencv_features2d.so.2.3.1
bin/grabcut: lib/libopencv_flann.so.2.3.1
bin/grabcut: lib/libopencv_highgui.so.2.3.1
bin/grabcut: lib/libopencv_imgproc.so.2.3.1
bin/grabcut: lib/libopencv_core.so.2.3.1
bin/grabcut: /usr/lib/libz.so
bin/grabcut: samples/cpp/CMakeFiles/example_grabcut.dir/build.make
bin/grabcut: samples/cpp/CMakeFiles/example_grabcut.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/grabcut"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example_grabcut.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/cpp/CMakeFiles/example_grabcut.dir/build: bin/grabcut
.PHONY : samples/cpp/CMakeFiles/example_grabcut.dir/build

samples/cpp/CMakeFiles/example_grabcut.dir/requires: samples/cpp/CMakeFiles/example_grabcut.dir/grabcut.o.requires
.PHONY : samples/cpp/CMakeFiles/example_grabcut.dir/requires

samples/cpp/CMakeFiles/example_grabcut.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp && $(CMAKE_COMMAND) -P CMakeFiles/example_grabcut.dir/cmake_clean.cmake
.PHONY : samples/cpp/CMakeFiles/example_grabcut.dir/clean

samples/cpp/CMakeFiles/example_grabcut.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/samples/cpp/CMakeFiles/example_grabcut.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/cpp/CMakeFiles/example_grabcut.dir/depend

