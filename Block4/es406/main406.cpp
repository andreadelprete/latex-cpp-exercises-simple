/*

*/

#include "interpolation.hpp"
#include <iostream>

using namespace std;

int main()
{
    float traj[] = { 3, 9, 1, -2, -10, -8, -4, -5, 2, 3,
        7, -4, -6, 5, 9, 8 };
    int trajLen = 16;
    float dt = 1; // 1 sec between trajectory points

    float timeStep = 0.01; // 0.01 sec for Linear Interpolation time step

    int interpolatedLen = ((trajLen - 1) * dt) / timeStep;
    float* interpolated = new float[interpolatedLen];

    linInterpolation(traj, dt, trajLen, timeStep, interpolated);

    printTrajToCSV("originalTraj.csv", traj, dt, trajLen);
    printTrajToCSV("interpolatedTraj.csv", interpolated, timeStep, interpolatedLen);

    return 0;
}