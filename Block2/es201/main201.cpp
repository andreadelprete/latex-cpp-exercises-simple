/*
    SUP che legge 10 numeri dall'utente e ne calcola la somma. 
    Fermarsi a leggere numeri quando l'utente inserisce tutti 
    i 10 numeri oppure quando inserisce 0. A fine inserimento 
    il programma stampa su due colonne il numero inserito e 
    l'ultimo valore di somma.

    Info: Il limite massimo dipende da quanto grandi decidiamo 
    che siano le strutture in fase di compilazione. 
    Impareremo che è possibile scrivere programmi che non 
    hanno questo tipo di limite.
*/

#include <iostream>

#define LEN 10

using namespace std;

int main()
{
    int numbers[LEN];
    cout << "Insert " << LEN << " numbers" << endl;

    // Getting numbers
    int num;
    int i = 0;
    while (num != 0 && i < LEN) {
        cout << "Insert number " << i << ": ";
        cin >> num;
        numbers[i] = num;
        i++;
    }

    cout << endl << endl <<"NUM\tSUM" << endl
         << "================" << endl;

    // Adding and printing
    int sum = 0;
    for (int k = 0; k < i; k++) {
        sum += numbers[k];
        cout << numbers[k] << "\t" << sum << endl;
    }

    return 0;
}