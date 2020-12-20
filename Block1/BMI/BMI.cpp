#include "BMI.hpp"
#include <iostream>

using namespace std;

float personPrompt(int personID)
{
    float h, w, bmi;
    cout << "Person " << personID << " info" << endl
         << "Height: ";
    cin >> h;
    cout << "Weight: ";
    cin >> w;

    bmi = computeBMI(h, w);
    cout << "BMI = " << bmi << ", class " << classBMI(bmi) << endl
         << endl;

    return bmi;
}

float computeBMI(float height, float weight)
{
    return weight / (height * height);
}

float classBMI(float BMI)
{
    if (BMI < 18.5)
        return 1;
    else if (BMI < 24.9)
        return 2;
    else if (BMI < 29.9)
        return 3;
    else
        return 4;
}