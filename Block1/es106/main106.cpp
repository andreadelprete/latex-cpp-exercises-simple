/*
    SUP che prende in ingresso un intero e calcola il valore della costante di eulero e con la seguente formula:
        e = 1 + 1 / 1! + 1 / 2! + 1 / 3! + · · ·
    Usare il valore in ingresso per quanto a fondo esplorare la progressione. Confrontare il valore con la
    funzione exp() presente in math.h con argomento 1. Se avete dubbi sulle funzioni di libreria, Google è
    tuo amico. Quante iterazioni sono necessarie per far scendere l'errore sotto ai millesimi?
*/

#include "expHomeMade.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    cout << "Insert number of iterations (max 20): ";
    int d;
    cin >> d;
    if (d > 20) {
        cout << "Listen for once. Exiting." << endl;
        return -1;
    }

    double originalExp = exp(1.0);
    double homeMadeExp = expHomeMade(d);

    cout << "Error: " << originalExp - homeMadeExp << endl;

    return 0;
}

// Are necessary 7 iterations