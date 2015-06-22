# Install script for directory: /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
      FILE(RPATH_CHECK
           FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1"
           RPATH "/usr/local/lib")
    ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
      "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib/libopencv_flann.so.2.3.1"
      "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib/libopencv_flann.so.2.3"
      "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib/libopencv_flann.so"
      )
    IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
      FILE(RPATH_CHANGE
           FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1"
           OLD_RPATH "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib:"
           NEW_RPATH "/usr/local/lib")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
      FILE(RPATH_CHECK
           FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1"
           RPATH "/usr/local/lib")
    ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
      "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib/libopencv_flann.so.2.3.1"
      "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib/libopencv_flann.so.2.3"
      "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib/libopencv_flann.so"
      )
    IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
      FILE(RPATH_CHANGE
           FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1"
           OLD_RPATH "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/build/lib:"
           NEW_RPATH "/usr/local/lib")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libopencv_flann.so.2.3.1")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE FILES
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/flann_base.hpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/any.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/config.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/kdtree_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/hdf5.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/defines.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/composite_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/allocator.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/kdtree_single_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/all_indices.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/linear_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/params.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/saving.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/matrix.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/simplex_downhill.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/timer.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/heap.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/logger.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/hierarchical_clustering_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/dynamic_bitset.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/autotuned_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/miniflann.hpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/dist.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/dummy.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/nn_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/result_set.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/object_factory.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/lsh_table.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/kmeans_index.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/index_testing.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/flann.hpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/ground_truth.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/sampling.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/random.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/general.h"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/modules/flann/include/opencv2/flann/lsh_index.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "main")

