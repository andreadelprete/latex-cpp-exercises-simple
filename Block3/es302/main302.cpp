/*
    SUP che prende una stringa dall'utente che può 
    essere anche una frase, comprensiva quindi di spazi e
    punteggiatura. 
    Il programma ristampa la stessa stringa al contrario.
*/

#include <cstring>
#include <iostream>

#define LEN 100

using namespace std;

int main()
{
    char input[LEN];

    cout << "Enter string to check: ";
    // This instead of simple cin because it reads also spaces
    cin.getline(input, sizeof(input));

    int len = strlen(input);

    for (int i = len - 1; i >= 0; i--) {
        cout << input[i];
    }
    cout << endl;

    return 0;
}