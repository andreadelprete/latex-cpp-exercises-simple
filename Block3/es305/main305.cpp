/*
    SUP che data una stringa in input calcola le occorrenze di ogni carattere. 
    Risolvere il problema usando un unico array per contare le occorrenze. 
    Stampare il risultato in tabella, con possibili interessanti statistiche
    a vostra discrezione. Considerare solo lettere dell'alfabeto, maiuscole 
    e minuscole fanno parte dello stesso conteggio. Scartare tutto ciò che 
    non è una lettera, per semplicità si scartano anche i caratteri della
    tabella ASCII estesa come le lettere accentate.

    Info: Tenere a mente come sono rappresentate le lettere nella tabella ASCII. 
    È possibile indicizzare l'array dove incrementiamo mano a mano il conteggio 
    usando direttamente la lettera sotto esame e applicando un offset. 
    Ad esempio la lettera D, quarta nell'alfabeto quindi avente indice 3, ha 
    valore ASCII 44, oppure anche 64 nel nostro caso. 
    Sottraendo un offset di 41 o di 61 rispettivamente, troviamo il nostro 
    indice di valore 3.
    
    Estensione avanzata:
    Invece che prendere in input una stringa dell'utente, prendere in input
    il nome di un file di testo plain-text, in altre parole un file .txt. 
    È possibile trovare online interi testi in formato .txt, come ad 
    esempio I Promessi Sposi, oppure anche La Divina Commedia. 
    La manipolazione di file in C++ usa lo stesso paradigma di uso 
    della console. Trovate qui quello che vi serve specificatamente per 
    risolvere questo esercizio, in particolare basatevi sull'esempio.
*/

#include "charCounterFuncs.hpp"
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

#define L 1000
#define FILENL 30
#define ALPHALEN 26

int main()
{
    int alphabet[ALPHALEN] = {}; // Occurrence counter for each letter
    char input[L];

    // Read string from console
    /*
    cout << "Enter string to check: ";
    cin.getline(input, sizeof(input));

       cout << "Examined " << countChars(input, alphabet)
     << "chars." << endl;
    */

    // Extended exercise
    int totChars = 0;
    cout << "Enter filename to process: ";
    cin.getline(input, sizeof(input));
    string line;
    ifstream fileHandle(input);

    if (fileHandle.is_open()) {  // If file was opened correctly
        // Read line by line. Delimited by \n
        while (getline(fileHandle, line)) {
            // Convert to char array
            const char* cStr = line.c_str();

            totChars += countChars(cStr, alphabet);
        }

        fileHandle.close();

        cout << "Examined " << totChars << " chars." << endl;
    } else {
        cout << "Error opening file" << endl;
        return -1;
    }

    // Print results
    for (int i = 0; i < ALPHALEN; i++) {
        cout << (char)(i + OFFSET) << "\t" << alphabet[i] << endl;
    }
}