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

# Utility rule file for package_source.

CMakeFiles/package_source:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 && tar --transform "s,^,OpenCV-2.3.1/," -cjpf /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/OpenCV-2.3.1.tar.bz2 --exclude=".svn" --exclude="*.pyc" --exclude="*.vcproj" --exclude="*/lib/*" --exclude="*.dll" ./

package_source: CMakeFiles/package_source
package_source: CMakeFiles/package_source.dir/build.make
.PHONY : package_source

# Rule to build all files generated by this target.
CMakeFiles/package_source.dir/build: package_source
.PHONY : CMakeFiles/package_source.dir/build

CMakeFiles/package_source.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/package_source.dir/cmake_clean.cmake
.PHONY : CMakeFiles/package_source.dir/clean

CMakeFiles/package_source.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles/package_source.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/package_source.dir/depend

