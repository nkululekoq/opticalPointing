# Install script for directory: /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/opencv/samples/gpu/performance" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/performance/performance.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/performance/tests.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/performance/performance.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/opencv/samples/gpu" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/stereo_match.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/stereo_multi.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/driver_api_stereo_multi.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/multi.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/cascadeclassifier_nvidia_api.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/cascadeclassifier.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/morfology.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/hog.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/driver_api_multi.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/surf_keypoint_matcher.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/aloeL.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/aloeR.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/tsucuba_left.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/road.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/gpu/tsucuba_right.png"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

