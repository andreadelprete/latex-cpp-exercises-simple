/*
    SUP che simula il comportamento di due dadi. I dadi possono avere 
    numero di facce variabile, ma per verificare la correttezza del 
    programma cominciare con dadi a sei facce. Il programma 'tira' i 
    due dadi usando la funzione rand, opportunamente inizializzata. 
    La somma dei valori di ogni lancio è salvata in array. 
    Il programma deve lanciare i dadi decine di migliaia di volte, 
    numero specificato dall'utente, e stampare la probabilità di ogni 
    valore sotto forma di tabella. Verificare che somma 7 è la più probabile
    con probabilità di un sesto, essendo che ci sono 6 lanci diversi 
    che restituiscono somma 7. Indagare poi con dadi aventi numero di 
    facce diverse da sei.
    
    Info: Il programma può simulare qualsiasi tipo di dado, ma in 
    realtà solo alcuni poligono possono richiudersi in un solido. 
    Qua una lista dei possibili dadi, dai più classici ai più esoterici.
*/

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    cout << "Insert desired number of launches: ";
    int launches;
    cin >> launches;

    int sides;
    cout << "Insert desired number of dice sides: ";
    cin >> sides;

    // Sum values for 6 sides can be between 0 and 10 (11 different values)
    int sidesComb = sides * 2 - 1;
    int* results = new int[sidesComb] {}; // Init to zero

    for (int i = 0; i < launches; i++) {
        // Rolling dices
        int dice1 = rand() % sides;
        int dice2 = rand() % sides;

        // Incrementing occurrence of corresponding launch
        results[dice1 + dice2]++;
    }

    cout << endl
         << "RESULT\tPROBABILITY" << endl
         << "===================" << endl;

    for (int i = 0; i < sidesComb; i++) {
        // Adding 2 because dices are not zero-indexed
        cout << i + 2 << "\t" << (float)results[i] / launches << endl;
    }

    delete[] results;
    return 0;
}