/*
    Contare le occorrenze delle parole in un testo, dove per parola si 
    intende un insieme di caratteri delimitato da spazi. 
    Quindi ad esempio in "se non l'amore può salvarci" consideriamo 
    "l'amore" come parola unica.

    Info: Basare il programma attorno ad una struct che al suo interno 
    memorizzi una parola e un variabile di conteggio. Usare la libreria 
    sviluppata all'esercizio precedente e stampare un elenco con le N 
    parole più utilizzate nel testo. Analizzare testi lunghi usando 
    l'apertura file vista in laboratorio.
*/

#include "libVA.hpp"
#include "theStruct.hpp"
#include "wordCount.hpp"
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    char input[] = "../../Block3/es305/promessiSposi.txt";

    theStruct** VA = initVA(50);

    string line;
    ifstream fileHandle(input);

    if (fileHandle.is_open()) { // If file was opened correctly
        // Read line by line. Delimited by \n
        while (getline(fileHandle, line)) {
            // Convert to char array
            const char* cStr = line.c_str();

            VA = lineElab(VA, cStr);
        }

        fileHandle.close();
    } else {
        cout << "Error opening file" << endl;
        return -1;
    }

    for (int i = 0; getVAElement(VA, i) != NULL; i++) {
        if (getVAElement(VA, i)->occurrences > 100 && strlen(getVAElement(VA, i)->word) > 3) {
            cout << getVAElement(VA, i)->word << "\t"
                 << getVAElement(VA, i)->occurrences << endl;
        }
    }

    destroyVA(VA);

    return 0;
}