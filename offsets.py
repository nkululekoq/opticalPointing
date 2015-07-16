import cv2
import numpy as np
import math
import sys
import matplotlib.pyplot as plt
import matplotlib.cm as cm
import os
from datetime import datetime
import time

def main():
	#get images
	images = os.listdir(str(sys.argv[1]))
	images.sort()
	
	#Open a text file to log offsets
	recordtime = datetime.now().strftime("%Y%m%d-%H%M%S")
	offsetfile = "Logs/offsets" + recordtime + ".txt"

	if not os.path.exists("Logs/"):
    		os.makedirs("Logs/")

	with open(offsetfile, 'a+') as f:
		f.write("IMAGE NAME\t\tSOURCE_X\tSOURCE_Y\tAZ_PIXEL_DELTA\tEL_PIXEL_DELTA\n")
		f.close()

	#Create the image objects for the image names
	#img1 = cv2.imread(str(sys.argv[1]+"/"+"2015-06-30-201951.png"), 0) #First image with dAZ,dEl=(0,0) Source is at (349,-29) relative to centre
	#img2 = cv2.imread(str(sys.argv[1]+"/"+"2015-06-30-202124.png"), 0) #First image with dAZ,dEl=(0,-2) Source is at (6,-105) relative to centre
	img3 = cv2.imread(str(sys.argv[1]+"/"+"2015-06-30-202305.png"), 0) #First image with dAZ,dEl=(0,-1) Source is at (186,-66) relative to center
	img4 = cv2.imread(str(sys.argv[1]+"/"+"2015-06-30-202840.png"), 0) #First image with dAZ,dEl=(-2,-1) Source is at (205,-145) relative to center

	# for e.g. img4-img3 will give you the CCD movement for +2 degrees in azimuth
	# img2 to img1 give CCD Movemenet equivalent to +2 degrees in elevation
	#Using the source CCD coordinates we estimate the rotation required to go from +X->AZ as 76.47

	#img4 to img 3 is  

	#Coordinates for elevation direction reference
	#source1Row, source1Col, center1Row, center1Col, angle0 = processRefImage(img1)
	#source2Row, source2Col, center2Row, center2Col, angle1 = processRefImage(img2)

	#Coordinates for azimuth direction reference
	source3Row, source3Col, center3Row, center3Col, refAngle = processImage(img3)
	source4Row, source4Col, center4Row, center4Col, refAngle = processImage(img4)
	print "Angle of azimuth reference source is: ", refAngle

	#go through each image and calculate errors
	for i in images:
		print i
		#img = cropImage(cv2.imread(str(sys.argv[1]+"/"+i), 0))
		img = cv2.imread(str(sys.argv[1]+"/"+i), 0)
		sourceRow, sourceCol, centerRow, centerCol, angle = processImage(img)
		calculateErrors(offsetfile,i,sourceRow, sourceCol, centerRow, centerCol, refAngle)
		drawImage(img, str(sys.argv[1]+"/"+i), sourceRow, sourceCol, centerRow, centerCol, source3Row, source3Col, source4Row, source4Col)

		
def cropImage(image):
	#Use numpy slicing to crop the image and throw away the useless pixels
	return image[25:475, 86:755]

def processImage(img):
	#Process the all images and return the image pixel source coordinates and the angle it makes with the ccd x-axis

	#Width is columns and height is rows
	cols, rows  = img.shape

	#Center is rows/2, cols/2
	centerRow, centerCol = rows/2, cols/2
	sourceRow, sourceCol = 0, 0

	#print "Center is at position ", centerRow, centerCol

	#Find the brightest pixel position in image[25:475, 86:755]
	brightest = img[0,0]
	for i in range(25, cols -1):
		for j in range(86, rows -4):
			if(img[i,j] > brightest):
				brightest = img[i,j]
				sourceRow = j
				sourceCol = i

	print "Source detected at ", (sourceRow, sourceCol)

	#X and Y components of the source
	#This makes the right-angled triangle with the x-axis
	#The center is now [0,0]
	x = centerRow - sourceRow
	y = centerCol - sourceCol

	#Work out the source angle relative to pixel x
	ratio = np.float(x)/np.float(y)
	#print "ratio for: ",y,"/",x," is: ", ratio

	#The angle that the source makes with the x-axis
	angle = np.degrees((np.arctan(ratio)))
	print "Source angle is: ", angle

	return sourceRow, sourceCol, centerRow, centerCol, angle

def calculateErrors(offsetfile, image, sourceRow, sourceCol, centerRow, centerCol, refAngle):
	#Calculate all the image errors and log to file

	refAngle = 76.7

	x =  sourceRow -centerRow
	y =  sourceCol - centerCol

	#Work out the distance from the centre
	distance = np.sqrt((x)**2 + (y)**2)
	print "Distance from the center is :", distance

	#Work out the source angle relative to pixel x
	ratio = np.float(y)/np.float(x)
	print "ratio for: ",y,"/",x," is: ", ratio

	angle1 = np.abs(np.degrees((np.arctan(ratio))))
	print "Source angle is: ", angle1

	azRotationAngle = np.abs(refAngle - angle1)
	print "Source Angle relative to azimuth is: ", azRotationAngle

	#azError = distance*np.cos(np.radians(azRotationAngle))
	#elError = distance*np.sin(np.radians(azRotationAngle))

	cost = np.cos(np.radians(refAngle))
	sint = np.sin(np.radians(refAngle))

	#Do a 2-D coordinate rotation anti-clockwise
	azPixelError = x*cost - y*sint
	elPixelError = x*sint + y*cost

	print "azError: ", azPixelError, "elError: ", elPixelError

	#Write errors to file
	with open(offsetfile, 'a+') as f:
		log = ("%s\t%3.2f\t\t%3.2f\t\t%3.2f\t\t%3.2f\n" %(image,sourceRow,sourceCol,azPixelError,elPixelError))
		f.write(log)
		f.close()

def drawImage(img, imageName, sourceRow, sourceCol, centerRow, centerCol, source3Row, source3Col, source4Row, source4Col):

	#Draw the distance from source to center
	cv2.line(img, (centerRow, centerCol), (sourceRow, sourceCol),(255, 0, 0), 1)

	#Label the line with distance
	#cv2.putText(img, str(distance), (centerRow, centerCol), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)
	
	#Coordinates for azimuth orientation
	centered4Row = source4Row-(source3Row-centerRow)
	centered4Col = source4Col-(source3Col-centerCol)

	print "Center shifted reference source: ", (centered4Row,centered4Col)

	#Draw and label the azimuth axis
	cv2.line(img,(centerRow,centerCol),(centered4Row,centered4Col),(255, 100, 100), 2)
	cv2.putText(img, "AZ", (centered4Row,centered4Col), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)	

	plt.title(str(imageName))
	plt.imshow(img, cmap = cm.Greys_r)
	plt.show(block=False)
	time.sleep(2)
	plt.close()

def pointingModel(az, el, dAz, dEl, phi):
	#Develop a pointing model from the data by optimising the model parameters
	dAz = 0
	dEl = 0

	az, el = 0
	return (az,el)

#convert to angle offsets

if __name__ == "__main__":
	main()
