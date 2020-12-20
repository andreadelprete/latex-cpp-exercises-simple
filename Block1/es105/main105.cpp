/*
    Il fattoriale di un numero non-negativo n si scrive n!. Ed è definito come segue:
    n! = n · (n − 1) · (n − 2) · (n − 3) · . . . · 1
    Se n == 0 allora 0! = 1. Per esempio
    5! = 5 · 4 · 3 · 2 · 1 = 120
    SUP che legge un numero non-negativo e calcolarne il fattoriale. Fino a che numero si ottengono risultati
    corretti? Controllare che l'utente inserisca un numero adeguato e in caso contrario scrivere un messaggio
    e terminare l'esecuzione.
    Info: È dimostrato che algoritmi scritti usando la ricorsione possono essere riscritti usando cicli
    iterativi classici (while/for) e viceversa. Provare a scrivere entrambe le soluzioni.
*/

#include "factorial.hpp"
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Insert number to compute factorial: ";
    cin >> n;

    cout << "Recursive:\t" << factorialRecursive(n) << endl;
    cout << "Iterative:\t" << factorialIterative(n) << endl;

    return 0;
}