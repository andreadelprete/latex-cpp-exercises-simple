/*
    SUP un programma che usa due funzioni di conversione della temperatura,
     da Celsius a Kelvin e da Fahrenheit a Kelvin. 
     Il programma stampa una tabella ben formattata con entrambe le scale 
     da 231 a 250 gradi Kelvin, a intervalli di 0.25 gradi
*/

#include "degreeConv.hpp"
#include <iostream>

using namespace std;

int main()
{
    cout << "K\tC\tF" << endl;

    for (float i = 247; i < 250; i += 0.25) {
        cout << i << "\t"
             << KtoC(i) << "\t"
             << KtoF(i) << "\t" << endl;
    }

    return 0;
}