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

# Utility rule file for pch_Generate_opencv_gpu.

modules/gpu/CMakeFiles/pch_Generate_opencv_gpu: modules/gpu/precomp.hpp.gch/opencv_gpu_RELEASE.gch

modules/gpu/precomp.hpp.gch/opencv_gpu_RELEASE.gch: ../modules/gpu/src/precomp.hpp
modules/gpu/precomp.hpp.gch/opencv_gpu_RELEASE.gch: modules/gpu/precomp.hpp
modules/gpu/precomp.hpp.gch/opencv_gpu_RELEASE.gch: lib/libopencv_gpu_pch_dephelp.a
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp.gch/opencv_gpu_RELEASE.gch"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu && /usr/bin/cmake -E make_directory /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu/precomp.hpp.gch
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu && /usr/bin/c++ -O3 -DNDEBUG -fomit-frame-pointer -msse -msse2 -DNDEBUG -fPIC -I"/usr/lib/python2.6/dist-packages/numpy/core/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/." -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/include/opencv" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/src/cuda" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/src" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/../core/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/../imgproc/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/../objdetect/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/../features2d/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/../flann/include" -I"/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/../calib3d/include" -D PYTHON_USE_NUMPY=1 -DHAVE_CVCONFIG_H -DCVAPI_EXPORTS -D PYTHON_USE_NUMPY=1 -DHAVE_CVCONFIG_H -Wall -Wno-long-long -pthread -ffunction-sections -x c++-header -o /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu/precomp.hpp.gch/opencv_gpu_RELEASE.gch /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu/precomp.hpp

modules/gpu/precomp.hpp: ../modules/gpu/src/precomp.hpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating precomp.hpp"
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu && /usr/bin/cmake -E copy /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu/src/precomp.hpp /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu/precomp.hpp

pch_Generate_opencv_gpu: modules/gpu/CMakeFiles/pch_Generate_opencv_gpu
pch_Generate_opencv_gpu: modules/gpu/precomp.hpp.gch/opencv_gpu_RELEASE.gch
pch_Generate_opencv_gpu: modules/gpu/precomp.hpp
pch_Generate_opencv_gpu: modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/build.make
.PHONY : pch_Generate_opencv_gpu

# Rule to build all files generated by this target.
modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/build: pch_Generate_opencv_gpu
.PHONY : modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/build

modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/clean:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu && $(CMAKE_COMMAND) -P CMakeFiles/pch_Generate_opencv_gpu.dir/cmake_clean.cmake
.PHONY : modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/clean

modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/depend:
	cd /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1 /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/gpu /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/gpu/CMakeFiles/pch_Generate_opencv_gpu.dir/depend

