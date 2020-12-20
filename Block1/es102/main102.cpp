/*
    SUP che dato un numero intero e un numero indice, individua la cifra alla posizione indice del primo
    numero inserito. Esempio: 39842, indice 2 (decine) = 4 decine. Farsi stampare solo la cifra, non serve il
    nome posizionale (decine, centinaia, ecc).
    Info: Per scomporre il numero in cifre, usare l'operatore divisione e resto con le potenze di 10.
    Questa è un'operazione che capita spesso in programmazione. Svolgere prima l'esercizio precedente:
    si può riutilizzare del codice
*/

#include "splitter.hpp"
#include <iostream>
using namespace std;

int main()
{
    int number, index;
    cout << "Insert number to split up: ";

    cin >> number;

    cout << "Insert index: " << endl;

    cin >> index;

    cout << splitter(number, index);

    return 0;
}