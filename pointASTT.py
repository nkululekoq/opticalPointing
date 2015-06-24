#Control routine for the ASTT to allow it to track a source. 
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
import pandas as pd
#timeout for the source tracking in seconds
timeout = 100
#run like this python point.py file.png rightAscension Declination

#first we create a function to read a star catalog of the following description
#name,Right Ascension, Declination
#alphyd, '18:03:15.98', '-20:31:52.9'
def readStarCatalog(starCatalogFilename,starName):
	starCat = pd.read_csv(starCatalogFilename,skiprows=1)
	StarLookup = starCat[starCat['name']==starName]
	#convert to numpy array
	StarLookupVals = np.array(StarLookup)

	print StarLookupVals
	ra = StarLookupVals[0][1]
	dec = StarLookupVals[0][2]
	return {'StarName':StarLookupVals[0][0],'RA':StarLookupVals[0][1], 'DEC':StarLookupVals[0][2]}

#Function to calculate the position of an object given a latitude, longitude, RA,DEC, epoch
def calculatePosition(latitude,longitude,horizon,RA,DEC,epoch):	
	Location=ephem.Observer()
	Location.horizon=horizon
	Location.lat=latitude
	Location.lon=longitude

	source = ephem.FixedBody()
	source._ra = RA
	source._dec = DEC
	source._epoch = epoch
	source.compute(Location)

	print 'Az:', source.az, 'Alt:', source.alt
	return {'Location':Location,'AZ':source.az,'EL':source.alt}

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
#Function to get angles from the ASTT
        tn.write("?sensor-value astt-az-angle\n")
        time.sleep(0.05)
        a=tn.read_very_eager()
        valAz= a.find('nominal')
        valAzF = a[valAz+8:valAz+15]

        tn.write("?sensor-value astt-el-angle\n")
        time.sleep(0.05)
        a=tn.read_very_eager()
        valEl= a.find('nominal')
        valElF = a[valEl+8:valEl+15]
        return {"az":float(valAzF),"el":float(valElF)}

def runASTT(tn): 
	Command="?run\n"
	tn.write(Command)

def trackSource(tn,sourceAz,sourceEl,timeOut):
	azCommand = float(np.rad2deg(sourceAz))
	elCommand = float(np.rad2deg(sourceEl))
	#we assume the source is observable at first
	observable=1
	#we parse the command given to the ASTT- return 0 if out of range
	if(azCommand <-120):
		#source is not observable
		observable =0
	if(azCommand >120):
		#source is not observable
		observable =0
	if(elCommand >90):
		#source is not observable
		observable =0
	if(elCommand <5):
		#source is not observable
		observable =0
	#azCommand = 100
	#elCommand = 20
	time.sleep(1)
	#set the desired position
	#zCommand=50
	#lCommand=40
	#create the appropriate command string
	Command="?set-angles %2.1f %2.1f\n"% (azCommand,elCommand)
	if(observable):
		print Command
		tn.write(Command)
	if(observable==0):
		print 'Source Not up- aborting'
	time.sleep(1)
	#start time of the track
	startTime = time.time()
	deltaTime =0
	offset = 1
	angles=getAngles(tn)
	# we will wait until the telescope is in range
	while(offset>0.8 and deltaTime <timeOut and observable==1): 
		deltaTime = time.time()-startTime
		try:
			angles=getAngles(tn)
		except:
			print 'Failed to get angles'
		try:
			az= np.float64(angles['az'])
			el= np.float64(angles['el'])
			print az,el,deltaTime
			offset = np.sqrt((az-np.float64(azCommand))**2 + (el-np.float64(elCommand))**2)
		except:
			print 'Error in dEl Calc'
		time.sleep(0.5)
		print offset
	return {'Observable':observable,'Angles':angles,'Offset':offset}


starName = sys.argv[1]
#read in the star catalog and produce a tuple containin the star name, RA,DEC
starCoordinates =  readStarCatalog('starCat.cat',starName)
#find the star that matches the name given in the input argument
a= calculatePosition('-5','-0.30',-5,starCoordinates['RA'],starCoordinates['DEC'],ephem.B1950)

print a['AZ'],a['EL']

tn = telnetlib.Telnet("optimus","1236")
runASTT(tn)

print trackSource(tn,a['AZ'],a['EL'],60) 
tn.close()

#Kuntunse.horizon='-5'
#Kuntunse.lat='5.75'
#Kuntunse.lon='-0.30'

#source = ephem.FixedBody()
#source._ra = starCoordinates['RA']
#source._dec = starCoordinates['DEC']
#source._epoch = ephem.B1950
#source.compute(Kuntunse)



#print 'Az:', source.az, 'Alt:', source.alt



#set the elevation and azimuth directions



#tn = telnetlib.Telnet("localhost","1236")
#unASTT(tn)
#source.compute(Kuntunse)
#sourceAz = source.az
#sourceEl = source.alt
#trackSource(tn,sourceAz,sourceEl) 


