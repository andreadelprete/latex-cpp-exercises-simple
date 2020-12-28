/*
    Trovare il numero più grande in un array è 
    un problema ricorrente in programmazione. 
    SUP che dati 10 numeri, inseriti dall'utente, 
    restituisce il numero più grande.

    PARTE DUE:
    Modificare il programma precedente in modo 
    che trovi i due numeri più grandi.
*/

#include "findBigger.hpp"
#include <iostream>

#define LEN 10

using namespace std;

int main()
{
    int numbers[LEN] = { 56, 48, 2, 98, 23, 113, 47, 113, 5, 61 };

    cout << "Finding max among: ";
    for (int i = 0; i < LEN; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Single max: " << findBigger(numbers, LEN) << endl;

    int result[2];
    findBiggerTwo(numbers, LEN, result);
    cout << "Double max: " << result[0] << " " << result[1];

    return 0;
}