/*
    Un intero è detto perfetto quando la somma dei suoi 
    fattori restituisce il numero stesso. Ad esempio 6 è
    numero perfetto essendo che 1 + 2 + 3 = 6. 
    Scrivere una funzione che determina se un numero è perfetto.
    Usarla per ricavare tutti i numeri perfetti da 1 a 1000.

    Info: Se siete riusciti a temporizzare il programma precedente, 
    provate ad alzare il limite della ricerca e confrontare i 
    tempi di calcolo con i vostri compagni.
*/

#include <iostream>
#include <chrono> 
#include "perfect.hpp"

using namespace std::chrono; 

using namespace std;

int main()
{
    int max;
    cout << "Insert upper bound of perfect numbers computation: ";
    cin >> max;

    // Using old method
    int countPerfects = 0;
    auto start = high_resolution_clock::now(); 
    for (int i = 0; i < max; i++) {
        if (isPerfect(i)) {
            countPerfects++;
            cout << i << endl;
        }
    }
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start);

    return 0;
}