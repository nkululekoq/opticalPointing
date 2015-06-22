import cv
import numpy as np
import time
import sys, optparse
import pdb
import os
import matplotlib.pylab as plt
import cv2 #for ubuntu 12.04 install see: http://karytech.blogspot.com/2012/05/opencv-24-on-ubuntu-1204.html

def grabImage(CAMERA_DEVICE_INDEX,CHANNEL,width,height):
	cam0t=cv2.VideoCapture(CAMERA_DEVICE_INDEX)
	#set up v4l2 to the correct input on the frame grabber
	os.system("v4l2-ctl -d /dev/video0 -i 1 --set-fmt-video=width=768,height=480")
	#and set up the correct width
	width =768
	height = 480
	am0t.set(3,width)
	am0t.set(4,height)
	#read in the image from the frame grabber
	ret,frame = cam0t.read()
	cam0t.release()
	cv2.imshow("Test",frame)
	cv2.imwrite('file.png',frame)
	print frame
	cv2.waitKey(0)


