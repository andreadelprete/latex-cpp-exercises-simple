/*
    Una parola, frase o numero palindromo ha la proprietà che può essere letto in entrambi i sensi. Per
    esempio i seguenti numeri da 5 cifre sono palindromi: 12321, 55555, 85658, 11611. SUP che legge un
    numero a 5 cifre e determina se questo è palindromo o meno.
    Info: Si consiglia di svolgere prima i due esercizi precedenti.
    Estensione: Il numero in ingresso non ha lunghezza fissata a 5 ma ha lunghezza variabile. Con
    questa estensione diventa l'esercizio algoritmicamente più complesso di questo Blocco.
*/

#include "paliUtilis.hpp"
#include <iostream>

using namespace std;

#define L 5

int main()
{
    cout << "Enter number to check if palindrome: ";

    int n;
    cin >> n;

    // if (isPalindromeArr(n, L))
    if (isPalindromeArr(n)) {
        cout << "is isPalindromeArr" << endl;
    } else {
        cout << "is not isPalindromeArr" << endl;
    }

    // if (isPalindromeNoArr(n, L))
    if (isPalindromeNoArr(n)) {
        cout << "is isPalindromeNoArr" << endl;
    } else {
        cout << "is not isPalindromeNoArr" << endl;
    }

    return 0;
}