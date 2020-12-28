/*
    SUP che legge diversi numeri decimali e 
    successivamente ristampa questi approssimati 
    all'intero più vicino. 
    Usare la funzione di libreria round. 
    Stampare i numeri come interi, quindi non 42.0 ma 42.
*/

#include <cmath>
#include <iostream>

#define LEN 3

using namespace std;

int main()
{
    for (int i = 0; i < LEN; i++) {
        float in;
        cout << "Insert decimal number to see it rounded (" << i << "): ";
        cin >> in;

        cout << "Rounded: " << (int)round(in) << endl;
    }

    return 0;
}