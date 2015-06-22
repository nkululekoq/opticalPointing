# Install script for directory: /home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/opencv/samples/cpp" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ FILES
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/kalman.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/kinect_maps.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/ffilldemo.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/imagelist_creator.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/watershed.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/contours2.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/drawing.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/distrans.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/descriptor_extractor_matcher.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/bagofwords_classification.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/squares.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/stereo_calib.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/matching_to_many_images.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/convexhull.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/cout_mat.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/starter_imagelist.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/stereo_match.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/edge.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/retinaDemo.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/generic_descriptor_match.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/houghlines.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/video_homography.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/video_dmtx.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/fback.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/kmeans.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/inpaint.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/connected_components.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/fitellipse.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/bgfg_segm.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/calibration_artificial.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/3calibration.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/filestorage.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/detector_descriptor_evaluation.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/image.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/em.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/camshiftdemo.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/chamfer.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/meanshift_segmentation.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/build3dmodel.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/peopledetect.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/morphology2.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/points_classifier.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/dft.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/matcher_simple.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/demhist.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/select3dobj.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/grabcut.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/minarea.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/delaunay2.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/calibration.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/brief_match_test.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/lkdemo.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/multicascadeclassifier.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/laplace.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/segment_objects.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/starter_video.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/letter_recog.cpp"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left05.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left11.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right14.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left09.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right06.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left02.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/building.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right07.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left01.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/lena.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left03.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right08.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right13.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left12.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left08.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left14.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right02.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right01.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/fruits.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/baboon.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right12.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left13.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right09.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/stuff.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right11.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left06.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right05.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left07.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/left04.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right04.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/right03.jpg"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/pic5.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/tsukuba_l.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/pic2.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/pic4.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/pic6.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/tsukuba_r.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/logo_in_clutter.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/logo.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/pic3.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/pic1.png"
    "/home/cbassuser/avnOpticalPointing/OpenCV-2.3.1/samples/cpp/letter-recognition.data"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

