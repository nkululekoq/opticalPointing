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
include modules/ts/CMakeFiles/opencv_ts.dir/depend.make

# Include the progress variables for this target.
include modules/ts/CMakeFiles/opencv_ts.dir/progress.make

# Include the compile flags for this target's objects.
include modules/ts/CMakeFiles/opencv_ts.dir/flags.make

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o: modules/ts/CMakeFiles/opencv_ts.dir/flags.make
modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o: ../modules/ts/src/ts_func.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_ts.dir/src/ts_func.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_func.cpp

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_ts.dir/src/ts_func.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_func.cpp > CMakeFiles/opencv_ts.dir/src/ts_func.i

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_ts.dir/src/ts_func.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_func.cpp -o CMakeFiles/opencv_ts.dir/src/ts_func.s

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.requires:
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.requires

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.provides: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.requires
	$(MAKE) -f modules/ts/CMakeFiles/opencv_ts.dir/build.make modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.provides.build
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.provides

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.provides.build: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.provides.build

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o: modules/ts/CMakeFiles/opencv_ts.dir/flags.make
modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o: ../modules/ts/src/ts_arrtest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_ts.dir/src/ts_arrtest.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_arrtest.cpp

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_ts.dir/src/ts_arrtest.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_arrtest.cpp > CMakeFiles/opencv_ts.dir/src/ts_arrtest.i

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_ts.dir/src/ts_arrtest.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_arrtest.cpp -o CMakeFiles/opencv_ts.dir/src/ts_arrtest.s

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.requires:
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.requires

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.provides: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.requires
	$(MAKE) -f modules/ts/CMakeFiles/opencv_ts.dir/build.make modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.provides.build
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.provides

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.provides.build: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.provides.build

modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o: modules/ts/CMakeFiles/opencv_ts.dir/flags.make
modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o: ../modules/ts/src/ts.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_ts.dir/src/ts.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts.cpp

modules/ts/CMakeFiles/opencv_ts.dir/src/ts.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_ts.dir/src/ts.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts.cpp > CMakeFiles/opencv_ts.dir/src/ts.i

modules/ts/CMakeFiles/opencv_ts.dir/src/ts.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_ts.dir/src/ts.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts.cpp -o CMakeFiles/opencv_ts.dir/src/ts.s

modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.requires:
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.requires

modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.provides: modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.requires
	$(MAKE) -f modules/ts/CMakeFiles/opencv_ts.dir/build.make modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.provides.build
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.provides

modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.provides.build: modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.provides.build

modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o: modules/ts/CMakeFiles/opencv_ts.dir/flags.make
modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o: ../modules/ts/src/precomp.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_ts.dir/src/precomp.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/precomp.cpp

modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_ts.dir/src/precomp.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/precomp.cpp > CMakeFiles/opencv_ts.dir/src/precomp.i

modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_ts.dir/src/precomp.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/precomp.cpp -o CMakeFiles/opencv_ts.dir/src/precomp.s

modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.requires:
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.requires

modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.provides: modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.requires
	$(MAKE) -f modules/ts/CMakeFiles/opencv_ts.dir/build.make modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.provides.build
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.provides

modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.provides.build: modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.provides.build

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o: modules/ts/CMakeFiles/opencv_ts.dir/flags.make
modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o: ../modules/ts/src/ts_gtest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -o CMakeFiles/opencv_ts.dir/src/ts_gtest.o -c /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_gtest.cpp

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_ts.dir/src/ts_gtest.i"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -E /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_gtest.cpp > CMakeFiles/opencv_ts.dir/src/ts_gtest.i

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_ts.dir/src/ts_gtest.s"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -include "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/precomp.hpp" -Winvalid-pch  -S /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts/src/ts_gtest.cpp -o CMakeFiles/opencv_ts.dir/src/ts_gtest.s

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.requires:
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.requires

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.provides: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.requires
	$(MAKE) -f modules/ts/CMakeFiles/opencv_ts.dir/build.make modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.provides.build
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.provides

modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.provides.build: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.provides.build

# Object files for target opencv_ts
opencv_ts_OBJECTS = \
"CMakeFiles/opencv_ts.dir/src/ts_func.o" \
"CMakeFiles/opencv_ts.dir/src/ts_arrtest.o" \
"CMakeFiles/opencv_ts.dir/src/ts.o" \
"CMakeFiles/opencv_ts.dir/src/precomp.o" \
"CMakeFiles/opencv_ts.dir/src/ts_gtest.o"

# External object files for target opencv_ts
opencv_ts_EXTERNAL_OBJECTS =

lib/libopencv_ts.so.2.3.1: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o
lib/libopencv_ts.so.2.3.1: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o
lib/libopencv_ts.so.2.3.1: modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o
lib/libopencv_ts.so.2.3.1: modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o
lib/libopencv_ts.so.2.3.1: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o
lib/libopencv_ts.so.2.3.1: lib/libopencv_core.so.2.3.1
lib/libopencv_ts.so.2.3.1: /usr/lib/libz.so
lib/libopencv_ts.so.2.3.1: modules/ts/CMakeFiles/opencv_ts.dir/build.make
lib/libopencv_ts.so.2.3.1: modules/ts/CMakeFiles/opencv_ts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../lib/libopencv_ts.so"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_ts.dir/link.txt --verbose=$(VERBOSE)
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libopencv_ts.so.2.3.1 ../../lib/libopencv_ts.so.2.3 ../../lib/libopencv_ts.so

lib/libopencv_ts.so.2.3: lib/libopencv_ts.so.2.3.1

lib/libopencv_ts.so: lib/libopencv_ts.so.2.3.1

# Rule to build all files generated by this target.
modules/ts/CMakeFiles/opencv_ts.dir/build: lib/libopencv_ts.so
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/build

modules/ts/CMakeFiles/opencv_ts.dir/requires: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_func.o.requires
modules/ts/CMakeFiles/opencv_ts.dir/requires: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_arrtest.o.requires
modules/ts/CMakeFiles/opencv_ts.dir/requires: modules/ts/CMakeFiles/opencv_ts.dir/src/ts.o.requires
modules/ts/CMakeFiles/opencv_ts.dir/requires: modules/ts/CMakeFiles/opencv_ts.dir/src/precomp.o.requires
modules/ts/CMakeFiles/opencv_ts.dir/requires: modules/ts/CMakeFiles/opencv_ts.dir/src/ts_gtest.o.requires
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/requires

modules/ts/CMakeFiles/opencv_ts.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts && $(CMAKE_COMMAND) -P CMakeFiles/opencv_ts.dir/cmake_clean.cmake
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/clean

modules/ts/CMakeFiles/opencv_ts.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/ts /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/ts/CMakeFiles/opencv_ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/ts/CMakeFiles/opencv_ts.dir/depend

