/*
    Write a complete C++ program with a main function to calculate 
    2 people's body mass index (BMI), using the following formula:

    BMI = weight / height2 * 703
    The BMI rating groups each person into one of the following four categories:

    BMI	Category
    below 18.5	class 1
    18.5 - 24.9	class 2
    25.0 - 29.9	class 3
    30.0 and up	class 4

    https://www.codestepbystep.com/problem/view/cpp/parameters/BMI

    NOTE: using metric instead, no conversion factor required (703)
*/

#include "BMI.hpp"
#include <iostream>

using namespace std;

int main()
{
    float bmi1, bmi2;

    bmi1 = personPrompt(1);
    bmi2 = personPrompt(2);

    cout << "BMI difference: " << bmi1 - bmi2 << endl;

    return 0;
}