# Install script for directory: /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/opencv/samples/c" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/motempl.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/polar_transforms.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/convert_cascade.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/pyramid_segmentation.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/delaunay.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/fback_c.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/morphology.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/contours.c"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/find_obj_calonder.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/latentsvmdetect.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/facedetect.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/blobtrack_sample.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/mser_sample.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/adaptiveskindetector.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/find_obj_ferns.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/mushroom.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/one_way_sample.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/tree_engine.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/find_obj.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/bgfg_codebook.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/baboon200.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/airplane.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/baboon200_rotated.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/lena.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/one_way_train_0001.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/fruits.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/baboon.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/one_way_train_0000.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/cat.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/stuff.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/box_in_scene.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/puzzle.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/box.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/JCB.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/agaricus-lepiota.data"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/waveform.data"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/build_all.sh"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/cvsample.dsp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/c/facedetect.cmd"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

