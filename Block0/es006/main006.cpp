/*
    Scrivere un programma che si fa inserire la lunghezza 
    del raggio e calcola il diametro, circonferenza e area.
    Ci sono diversi modi nell'ottenere la costante π, 
    tra cui scriversela a mano. Fare i calcoli direttamente
    nei comandi di cout.
*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    float r;

    cout << "Insert radius length: ";
    cin >> r;

    cout << "Diameter: " << 2 * r << endl
         << "Circumference: " << 2 * r * M_PI << endl
         << "Area: " << r * r * M_PI << endl;

    return 0;
}