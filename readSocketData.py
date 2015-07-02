import socket
import collections
import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
a=collections.deque('',21)
length=21

UDP_IP = "127.0.0.1"
UDP_PORT = 5005

sock = socket.socket(socket.AF_INET, # Internet
                     socket.SOCK_DGRAM) # UDP
sock.bind((UDP_IP, UDP_PORT))
def init():
	for line in lines:
		line.set_data([],[])
	print 'end init'
	return lines

def plotData(aa):
	data, addr = sock.recvfrom(1024) # buffer size is 1024 bytes
	print "received message:", data
	data = data.rstrip('\n')
	asttData= data.split(',')
	a.append(asttData)
	
	#first we generate the numpy containers for things
	print a
	print len(a)

	time=np.zeros(length)
	azCommand = np.zeros(length)
	azActual = np.zeros(length)
	#then convert from deque to numpy arrays
	for i in range(0,len(a)):
		time[i]=a[i][0]
		azCommand[i]=np.float(a[i][1])
		azActual[i]=np.float(a[i][2])
#	print azActual,azCommand
#	print type(azCommand)
	time2=np.arange(0,length)
	xlist=[time2,time2]
	ylist=[azActual,azCommand]
	print xlist,ylist

	for lnum,line in enumerate(lines):	
		line.set_data(xlist[lnum],ylist[lnum])
	#	print xlist,ylist	
	return lines	

time=np.zeros(length)
azCommand = np.zeros(length)
azActual = np.zeros(length)

azActual = np.zeros(length)
fig, ax = plt.subplots()
plotlays, plotcols = [2], ["black","red"]
#line, = ax.plot([], [], lw=2)
lines = []
for index in range(2):
    lobj = ax.plot([],[],lw=2,color=plotcols[index])[0]
    lines.append(lobj)
ax.set_ylim(0, 100)
ax.set_xlim(0, 20)
ax.grid()
xdata, ydata = [], []
i=0
ani=animation.FuncAnimation(fig,plotData,frames=100,init_func=init,blit=True,interval=2)
plt.show()






