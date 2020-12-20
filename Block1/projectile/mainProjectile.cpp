/*
    Write a console program that calculates the trajectory that 
    a projectile will follow. You will prompt the user for the 
    projectile's initial velocity, its initial angle relative to 
    the horizontal, and the number of time increments to display. 
    
    Here is an example output log from your program:
*/

#include "projectile.hpp"
#include <iostream>

using namespace std;

int main()
{
    float v0, a0, stepSize;
    int steps;

    cout << "Velocity  (m/s): ";
    cin >> v0;
    cout << "Angle (degrees): ";
    cin >> a0;
    cout << "Step size (s): ";
    cin >> stepSize;
    cout << "Number of steps: ";
    cin >> steps;

    projectileSimulation(v0, a0, stepSize, steps);

    return 0;
}
