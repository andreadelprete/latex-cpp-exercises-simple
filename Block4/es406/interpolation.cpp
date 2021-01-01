#include "interpolation.hpp"
#include <fstream>

using namespace std;

void linInterpolation(float traj[], float dt, int trajLen, float timeStep, float out[])
{
    int pointsPerLine = dt / timeStep;
    for (int i = 1; i < trajLen; i++) {
        // Calculating line parameters
        float m = (traj[i] - traj[i - 1]) / dt;
        float q = traj[i] - m * dt * i;

        for (int k = 0; k < pointsPerLine; k++) {
            // Using line equation to get intermediate points y = mx + q
            out[pointsPerLine * (i - 1) + k] = m * (dt * (i - 1) + timeStep * k) + q;
        }
    }
}

void printTrajToCSV(char fileName[], float traj[], float dt, int len)
{
    // Create and open a text file
    ofstream f(fileName);

    // Write CSV file header
    f << "Time,Value" << endl;
    for (int i = 0; i < len; i++) {
        f << dt * i << "," << traj[i] << endl;
    }

    f.close();
}