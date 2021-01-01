from numpy import genfromtxt
import matplotlib.pyplot as plt


origTraj = genfromtxt('originalTraj.csv', delimiter=',', skip_header=1)
linIntTraj = genfromtxt('interpolatedTraj.csv', delimiter=',', skip_header=1)

plt.xlabel('Time')
plt.ylabel('Position')

plt.scatter(origTraj[:, 0], origTraj[:, 1], marker='+', c='red', s=75, label='original')
plt.plot(linIntTraj[:, 0], linIntTraj[:, 1], label='interpolated')

plt.legend(loc="lower right")
plt.show()


