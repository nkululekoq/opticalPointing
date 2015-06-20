import cv2
import numpy as np
import math
import sys
import matplotlib.pyplot as plt
import matplotlib.cm as cm

img = cv2.imread(str(sys.argv[1]), 0)

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

#Find the brightest pixel position
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
