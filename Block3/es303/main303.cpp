/*
    Localizzare in una stringa tutte le occorrenze di un 
    determinato carattere. Le stringhe in ingresso sono
    composte di sole lettere minuscole e spazi. 
    Il programma stampa la stessa stringa in ingresso con le
    occorrenze trovate convertite a lettere maiuscole. 
    Stampa inoltre un conteggio delle occorrenze.

    Info: Ci sono diverse funzioni di libreria che possono 
    essere utili in questo esercizio. Consultare
    l'elenco completo e scegliere quella ritenuta più adatta.
*/

#include <cstring>
#include <iostream>

#define LEN 100

using namespace std;

int main()
{
    char input[LEN];
    cout << "Enter string: ";
    // This instead of simple cin because it reads also spaces
    cin.getline(input, sizeof(input));

    char tokenBuff[2];
    char token;
    cout << "Enter character to locate and count: ";
    cin.getline(tokenBuff, 2);
    token = tokenBuff[0];

    // Locate, count and modify
    int count = 0;
    char* pch = strchr(input, token);
    while (pch != NULL) {
        cout << "Found at: " << pch - input + 1 << endl;
        count++;

        *pch = toupper(*pch);

        pch = strchr(pch + 1, token);
    }

    cout << input << endl
         << "Occurrences of '" << token << "': " << count << endl;

    return 0;
}