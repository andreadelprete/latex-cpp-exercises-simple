/*
    Write C++ code that prompts the user for nonzero integers, 
    and then prints the average of all even numbers typed. 
    (When the user types 0, stop asking for input.)

    https://www.codestepbystep.com/problem/view/cpp/basics/evenAverage
*/

#include <iostream>

using namespace std;

int main()
{
    int in;
    int sum = 0;
    int n = 0;

    // Ask for starting number
    cout << "Insert number: ";
    cin >> in;

    // Ask for numbers until the input
    // number is not zero
    while (in != 0) {
        // Consider only even numbers
        if (in % 2 == 0) {
            sum += in;
            n++;
        }
        // Ask for starting number
        cout << "Insert number: ";
        cin >> in;
    }

    // Compute result and terminate
    cout << "Result: " << (float)sum / n << endl;

    return 0;
}
