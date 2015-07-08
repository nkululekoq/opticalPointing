import socket
import collections
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import datetime
import matplotlib.dates as mdates
import time
#Very first thing is to create a deque object that will handle the sliding data. 
#We also need to define the length of the sliding vector, and another global variable that is used
#for plotting elsewhere.
a=collections.deque('',1000)
length=1001

#Now we setup the UDP socket handler listening on the localhost, port 5005
UDP_IP = "127.0.0.1"
UDP_PORT = 5005
sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP
sock.bind((UDP_IP, UDP_PORT))


def init():
#define a function to initialise the plotting of lines using the animation library
	for line in lines:
		line.set_data([],[])
	print 'end init'
	return lines

def plotData(aa):
#And this routine is called by the animation library to plot the data

	#First, the routine blocks on UDP recvfrom- i.e. it waits for new data to arrive on the UDP socket
	data, addr = sock.recvfrom(1024) # buffer size is 1024 bytes
	print "received message:", data
	#Strip the newline from the end of the data
	data = data.rstrip('\n')
	#Now split the data into dict, based on comma separation
	asttData= data.split(',')
	#and append the data to the deque object we defined in the beginning
	a.append(asttData)
	
	#Now we generate the numpy containers. These will hold the information we parse from the deque items
	time=np.zeros(len(a))+ttstart
	azCommand = np.zeros(len(a))
	azActual = np.zeros(len(a))
	elCommand = np.zeros(len(a))
	elActual = np.zeros(len(a))
	#then convert from deque to numpy arrays
	time3=[]
	for i in range(0,len(a)):
		time[i]=a[i][0]
#		time3.append(datetime.datetime.fromtimestamp(time))
		azCommand[i]=np.float(a[i][1])
		azActual[i]=np.float(a[i][2])
		elCommand[i]=np.float(a[i][3])
		elActual[i]=np.float(a[i][4])
	#Now we define the plotting arrays. We are plotting Az(actual), Az(desired), El(Actual), El(desired).
	#These are initially defined as four lines on two different axes, before this routine was called. 
	dts = map(datetime.datetime.fromtimestamp, time)
	fds = mdates.date2num(dts)
	#The lines are stored in the global variable lines
	time2=np.arange(0,length)
#	print fds
	time=time-ttstart
	xlist=[time,time,time,time]
	#xlist=[fds,fds,fds,fds]
	ylist=[azActual,azCommand,elActual,elCommand]

	#In the main routine we define the four lines. These are on different plotting axes, and are stored in the 
	#globally accessible variable lines
	#we loop through lines, and extract the relevant data from the dict (?) item we created earlier in xlist, ylist
	for lnum,line in enumerate(lines):	
		line.set_data(xlist[lnum],ylist[lnum])
	return lines	

ttstart=time.time()
dts = datetime.datetime.fromtimestamp(ttstart)
fds = mdates.date2num(dts)



#First thing- define a plot window
fig = plt.figure()
#Now create axes for the plots
ax1=fig.add_subplot(2,1,1)
#and link the x-axis of the plots together for zooming.
ax2=fig.add_subplot(2,1,2,sharex=ax1)
#Now we define the colour of the two lines per plot (i.e. these will be Az(desired) and Az(actual) respectively
plotlays, plotcols = [2], ["black","red"]
#define the holder for the four line plot objects
lines = []
#and now define the four line plot characteristics
for index in range(2):
    lobj = ax1.plot([],[],lw=1,color=plotcols[index])[0]
    lines.append(lobj)
for index in range(2):
    lobj = ax2.plot([],[],lw=1,color=plotcols[index])[0]
    lines.append(lobj)
#Set up all the plot characteristics
hfmt = mdates.DateFormatter('%H:%M:%S')
ax1.set_ylim(0, 100)
#ax1.set_xlim(735782.06213, 735782.06513)
#ax1.xaxis_date()
#ax1.xaxis.set_major_formatter(hfmt)
#ax1.xaxis.set_major_locator(mdates.SecondLocator())

ax1.set_ylabel('Position [deg]')
ax1.set_title('Azimuth')
ax2.set_ylim(0, 100)
#ax2.xaxis_date()
#ax2.xaxis.set_major_formatter(hfmt)
#ax2.xaxis.set_major_locator(mdates.SecondLocator())
ax2.set_xlim(0, length)
ax2.set_xlabel('Time')
ax2.set_ylabel('Position [deg]')
ax2.set_title('Elevation')
ax1.grid()
ax2.grid()
xdata, ydata = [], []
i=0

#and now we call the animation function to do the plotting- This relies on the plotData function written earlier
ani=animation.FuncAnimation(fig,plotData,frames=100,init_func=init,blit=True,interval=2)
plt.show()






