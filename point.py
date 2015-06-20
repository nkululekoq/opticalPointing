import cv2
import numpy as np
import math
import sys
import matplotlib.pyplot as plt
import matplotlib.cm as cm
from select import select
import time
import opticalPointing
import ephem
import os
import datetime
import telnetlib
#run like this python point.py file.png rightAscension Declination

def getPicture(deviceNumber,filename,write="FALSE"):
        CAMERA_DEVICE_INDEX=deviceNumber
        cam0t=cv2.VideoCapture(CAMERA_DEVICE_INDEX)
        #set up v4l2 to the correct input on the frame grabber
        #os.system("v4l2-ctl -d /dev/video0 -i 0 --set-fmt-video=width=768,height=480")
        #time.sleep(1)
        os.system("v4l2-ctl -d /dev/video1 -i 1 --set-fmt-video=width=768,height=480")
        time.sleep(0.3)
        #and set up the correct width
        width =768
        height = 480
        cam0t.set(3,width)
        cam0t.set(4,height)
        #read in the image from the frame grabber
        filename=datetime.datetime.utcnow().strftime("%Y-%m-%d-%H%M%S")
        ret,frame = cam0t.read()
        ret,frame = cam0t.read()
        ret,frame = cam0t.read()
        if(write):
                cv2.imwrite(filename+'.png',frame)
        cam0t.release()
        cv2.imshow("Test",frame)
   #     print frame
        cv2.waitKey(1)
        return filename

def getAngles(tn):
        tn.write("?sensor-value astt-az-angle\n")
        time.sleep(0.01)
        a=tn.read_very_eager()
        valAz= a.find('nominal')
        valAzF = a[valAz+8:valAz+15]

        tn.write("?sensor-value astt-el-angle\n")
        time.sleep(0.01)
        a=tn.read_very_eager()
        valEl= a.find('nominal')
        valElF = a[valEl+8:valEl+15]
        return {"az":float(valAzF),"el":float(valElF)}

def runASTT(tn): 
	Command="?run\n"
	tn.write(Command)

def trackSource(tn,sourceAz,sourceEl): 
	azCommand = float(np.rad2deg(sourceAz))
	elCommand = float(np.rad2deg(sourceEl))
	if(azCommand <-90):
		azCommand=-90
	if(azCommand >0):
		azCommand=0
	#azCommand = 100
	#elCommand = 20
	time.sleep(1)
	#set the desired position
	#zCommand=50
	#lCommand=40
	#create the appropriate command string
	Command="?set-angles %2.1f %2.1f\n"% (azCommand,elCommand)
	print Command
	tn.write(Command)
	time.sleep(1)
	angles=getAngles(tn)
	return angles


getPicture(1,sys.argv[1],write=1)
img = cv2.imread(str(sys.argv[1]), 0)
ra = sys.argv[2]
dec = sys.argv[3]

Kuntunse=ephem.Observer()
Kuntunse.horizon='-5'
Kuntunse.lat='5.75'
Kuntunse.lon='-0.30'

source = ephem.FixedBody()
#source._ra = '18:03:15.98'
#source._dec = '-20:31:52.9'
source._ra = ra
source._dec = dec
source._epoch = ephem.B1950
source.compute(Kuntunse)
print 'Az:', source.az, 'Alt:', source.alt


print ra,dec

#set the elevation and azimuth directions
Direction = +90
DirectionRad = np.deg2rad(Direction-45)

print type(img), img.shape, img.dtype, img.size

#Width is columns and height is rows
cols, rows  = img.shape

print img.shape

centerRow, centerCol = rows/2, cols/2
sourceRow, sourceCol = 0, 0

brightest = img[0,0]

print "Center is at position ", centerRow, centerCol


tn = telnetlib.Telnet("localhost","1236")
runASTT(tn)
source.compute(Kuntunse)
sourceAz = source.az
sourceEl = source.alt
trackSource(tn,sourceAz,sourceEl) 


while True:
	#Find the brightest pixel position
	brightest = img[0,0]
	for i in range(0, cols -1):
		for j in range(0, rows -1):
			if(img[i,j] > brightest):
				brightest = img[i,j]
				sourceRow = j
				sourceCol = i

	print brightest, "at ", sourceRow, " ", sourceCol

	#Work out the distance from the centre
	distance = math.sqrt((centerRow - sourceRow)**2 + (centerCol - sourceCol)**2)
	print "Distance from the center is :", distance
	dCol = sourceCol-centerCol
	dRow = sourceRow-centerRow
	angleSource =  np.rad2deg(np.arctan(float(dRow)/float(dCol)))
	#Run my program
	print 'In the loop,'
	rlist, _, _ = select([sys.stdin], [], [], 1)
	# Check if the user asked to terminate the loop.
	if rlist:
		print 'rlist'
		timeFormat = time.strftime("%Y %m %d %H %M %S")
		print timeFormat, dAz,dEl
		break
	time.sleep(1)
	# Give the user another chance to exit.

	#angle is measured from zero facing downward on the image. Defined as the direction of positive elevation
	angle =+160
	dAzPoint  = 150 * np.cos(np.deg2rad(angle))
	dElPoint  = 150 * np.sin(np.deg2rad(angle)) 
	dEl  = distance*np.cos(np.deg2rad(angle-angleSource))
	dAz  = distance*np.sin(np.deg2rad(angle-angleSource))
	print "nCol nRow", (sourceCol-centerCol),(sourceRow-sourceCol)
	#dAz  = dCol * np.cos(DirectionRad) + dRow * np.sin(DirectionRad)
	#dEl  = -dCol * np.sin(DirectionRad) + dRow * np.cos(DirectionRad)
	print "dazPoint, delPoint", (dAzPoint,dElPoint) 
	print "daz, del", (dAz,dEl) 
	print "angle", np.rad2deg(np.arctan(float(dRow)/float(dCol)))
	print time.strftime("%Y %m %d %H %M %S"),dAz,dEl
	source.compute(Kuntunse)
	print 'Az:', source.az, 'Alt:', source.alt
	#Draw the distance from source to center
	cv2.line(img, (centerRow, centerCol), (sourceRow, sourceCol),(255, 0, 0), 1)
	cv2.line(img, (centerRow, centerCol), (int(dElPoint)+centerRow, int(dAzPoint)+centerCol),(255, 0, 0), 1)
	#cv2.line(img, (centerRow, centerCol), (int(dEl)+centerRow, int(dAz)+centerCol),(255, 0, 0), 1)

	#Label the line with distance
	cv2.putText(img, str("dAz = %2.1f dEl = %2.1f" %(dAz,dEl)), (400, 400), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
	cv2.putText(img, "EDir", (int(dElPoint)+centerRow, int(dAzPoint) + centerCol), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

	#convert to angle offsets

	#cv2.imshow('processed img',img)
	#cv2.waitKey(0)
	#cv2.destroyAllWindows()

	plt.imshow(img, cmap = cm.Greys_r)
	plt.show()
	getPicture(1,sys.argv[1],write=1)
	img = cv2.imread(str(sys.argv[1]), 0)
	source.compute(Kuntunse)
	sourceAz = source.az
	sourceEl = source.alt
	trackSource(tn,sourceAz,sourceEl) 

tn.close()
