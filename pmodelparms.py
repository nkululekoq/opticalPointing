import pylab
import numpy as np
import pandas as pd
from scipy import optimize


#AS measured from observations of Saturn we know that the pixel scaling in 
#elevation is ~184.17pixels to 1 degree
#For azimuth however we need to take into account the elevation angle of the o
#observation. This will reduce the sky azimuth angle 1/cos(el). So for e.g. if 
#At el~77 degrees we measured a distance of 123.36 pixels when we move by 3 degrees in azimuth
#then we are actually getting (123.36/(cos(77))/184 degrees
data=pd.read_csv('data.csv')

data['AzError']=data['CCDAzerror']/(np.cos(np.radians(data['El'])))/184
data['ElError']=data['CCDElError']/184

#phi is the angle between the Y=+90 degrees and the horizon, measured positive in the direction from the
#Y=+90 degrees to X,Y=(0,0).
#For AZEL mount phi=90 degrees
phi=np.radians(90)
cosphi=np.cos(phi)
sinphi=np.sin(phi)
az=data['Az']
el=data['El']
azError=data['AzError']
elError=data['ElError']

#initiate the Parameter vector
#P1 - Az angle offset (difference of the Az angle encoder bias (positive if encoder reading is too high) minus 'tilt around, which is the tilt of the antenna around the El=+90 (positive if the apparent Az,El=(0,0) is closer to the true Az,El=(+90,0))
#P2 - Az angle sag, i.e. effect of gravity on the RF axis of the dish projected on the Az direction
#P3 - perpendicular axis skew, that is the apparent El=+90 to the the true El=0
#P4 - the box offset, RF-axis to radial direction mislignment along the Az direction
#P5 - Tilt out, ie.e tilt of the apparent Y=+90 toward the true Az,El=(0,0)
#P6 - tilt over, i.e. tilt of the Y=+90 toward the true Az,El=(90,0)
#P7 - El angle offset, i.e. the difference of the El angle encoder bias - the sum of the skew of El=+90 along the current meridian angle 
#P8 - El angle sag, i.e. the effect of gravity on the RF axis of the dish projected on the El direction
#P9 - ad hoc El-angle excess scale factor (greater than 0 if the encoder read-out changes faster than the actual antenna position)
#P10 - ad hoc deltaEl*cos(El) coefficient
#P11 - ad hoc deltaEl*sin(El) coefficient
#P12 - ad hoc Az-angle excess scale factor (greater than 0 if the encoder read-out is faster than the actual antenna position)
#P13 - ad hoc deltaAz*cos(Az) coefficient
#P14 - ad hoc deltaAz*sin(Az) coefficient
#P15 - ad hoc deltaAz*cos(2*Az) coefficient
#P16 - ad hoc deltaAz*sin(2*Az) doeffient

P=np.zeros(7) 
P[1] = 0 
P[2] = 0
#[3] = 0
#[4] = 0
#[5] = 0
#[6] = 0
#[7] = 0
#[8] = 0
#[9] = 0
#[10] = 0
#[11] = 0
#[12] = 0
#[13] = 0
#[14] = 0
#[15] = 0
#[16] = 0


def pointingModel(P,az,el,phi,azErr,elErr):
	phi=np.radians(phi)
	#modelDAz = P[1] - P[2]*np.cos(phi)*np.sin(az)/np.cos(el) + P[3]*np.tan(el) - P[4]/np.cos(el) + P[5]*np.sin(az)*np.tan(el) - P[6]*np.cos(az)*np.tan(el) + P[12]*az + P[13]*np.cos(az) + P[14]*np.sin(az) + P[15]*np.cos(2*az) + P[16]*np.sin(2*az)

	
	#modelDEl = P[5]*np.cos(az) + P[6]*np.sin(az) + P[7] - P[8]*(np.cos(phi)*np.cos(az)*np.sin(el) - np.sin(phi)*np.cos(el)) + P[9]*el + P[10]*np.cos(el) + P[11]*np.sin(el)
	modelDAz = P[1] - P[2]*np.cos(phi)*np.sin(az)/np.cos(el) 

	modelDEl = P[5]*np.cos(az) 

	totalError = (modelDAz-azErr)**2 + (modelDEl-elErr)**2 
	return(totalError)

def pointingModel2(P,az,azErr,el,elError):
	phi=np.radians(90)

	
	modelDAz = P[0] - P[1]*np.cos(phi)*np.sin(az)/np.cos(el) +  P[2]*np.tan(el)+ P[3]*np.tan(el) - P[4]/np.cos(el)+ P[5]*np.sin(az)*np.tan(el)- P[6]*np.cos(az)*np.tan(el)
	modelDEl = P[5]*np.cos(az) + P[6]*np.sin(az)


	totalError = ((modelDAz-azErr))**2 +(modelDEl-elError)**2 
	return(totalError)

error1 = pointingModel2(P,az,azError,el,elError)



print P
P=  optimize.leastsq(pointingModel2,P,args=(az,azError,el,elError))
#P=  optimize.broyden1(pointingModel2,P,args=(az,azError,el,elError))
print P[0]

error2 = pointingModel2(P[0],az,azError,el,elError)

print sum(error1**2)
print sum(error2**2)
