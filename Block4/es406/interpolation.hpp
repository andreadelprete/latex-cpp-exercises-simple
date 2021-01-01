#ifndef INTERPOLATED_H
#define INTERPOLATED_H

void linInterpolation(float traj[], float dt, int trajLen, float timeStep, float out[]);

void printTrajToCSV(char fileName[], float traj[], float dt, int len);

#endif