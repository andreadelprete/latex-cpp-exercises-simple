/*
    SUP che calcola l'ipotenusa dati i due cateti.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float c1, c2;

    cout <<  "Cathetus 1: ";
    cin >> c1;

    cout <<  "Cathetus 2: ";
    cin >> c2;


    cout << sqrt(c1 * c1 + c2 * c2);

    return 0;
}