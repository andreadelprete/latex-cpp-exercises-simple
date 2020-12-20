#include "projectile.hpp"
#define _USE_MATH_DEFINES // To unlock math constants
#include <cmath>
#include <iostream>

using namespace std;

void projectileSimulation(float v0, float a0, float stepSize, int steps)
{
    float x, y, t = 0;

    float v0x = v0 * cos(a0 * M_PI / 180.0);
    float v0y = v0 * sin(a0 * M_PI / 180.0);

    cout << "step\tx\ty\ttime" << endl
         << "----------------------------" << endl
         << "0\t0.00\t0.00\t0.00" << endl;

    cout.precision(2); // Two decimal places

    for (int i = 1; i <= steps; i++) {
        // Update time
        t += stepSize;

        // Update x position
        x = v0x * t;

        // Update y velocity
        y = v0y * t - 0.5 * GRAVITY * t * t;

        // Print stuff - "fixed" to suppress scientific notation
        cout << fixed << i << "\t" << x << "\t" << y << "\t" << t << endl;
    }
}