/*
    Modi?care il programma 1.3 perché l'utente 
    possa inserire frasi anziché numeri, 
    lunghe fino a 100 caratteri.

    Info: Qua<link> una lista di frasi palindrome con 
    cui fare dei test, tenendo a mente che la stessa lettera
    maiuscola e minuscola ha due codici ASCII diversi. 
    Inoltre in queste frasi la punteggiatura non è
    palindroma. Usare questo e questo per modificare 
    la stringa inserita dall'utente rendendo tutte le
    lettere minuscole e togliere la punteggiatura.

    ATTENZIONE: La soluzione qui proposta 
    contiene anche una versione avanzata.

    Program that given a string,
    prints out if is palindrome or not
*/

#include "paliStr.hpp"
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    /* // Possible also to ask the user about the text length 
    int maxLen;
    cout << "Enter max string length: ";
    cin >> maxLen;
    char * input = new char[maxLen];
    */
    char input[1000];

    cout << "Enter string to check: ";
    // This instead of simple cin because it reads also spaces
    //cin.getline(input, 10); // Dummy call to reset console
    cin.getline(input, sizeof(input));

    // "ciao" -> ciao\0 check this with debugger
    // Stop execution on the if and hover with
    // the mouse over variable input to see this

    if (isPalindromeStrCleanBefore(input)) {
        cout << "is palindrome" << endl;
    } else {
        cout << "is not palindrome" << endl;
    }

    //delete[] input;

    return 0;
}
