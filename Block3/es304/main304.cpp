/*
    SUP esegue parsing di stringa e svolge una funzionalità 
    programmabile. Nello specifico il programma prende in 
    input una stringa di valori di temperatura del tipo 
    "20C@34F@12F@23C" e converte questi in gradi Kelvin. 
    Stampare due tabelle distinte per conversioni Celsius e Fahrenheit.
    
    Info: Come nell'esercizio precedente, diverse funzioni 
    di libreria possono aiutare a dividere la stringa
    in più parti. In questo la scelta più adatta è strtok.

    20C@34F@12F@23C

    convert all temperatures to Kelvin
*/

#include "batchFuncs.hpp"
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

#define L 1000
#define LBUFF 30

int main()
{
    char input[L] = "20C@34F@12F@23C";
    char buffer[LBUFF];

    // Step 5
    int howManyF = 0;
    int FconvFromStr[L];
    float FconvToK[L];

    // Step 1
    char* pch = strtok(input, "@");
    while (pch != NULL) {

        strcpy(buffer, pch);

        // Step 2
        int tokLen = strlen(buffer);
        char scale = buffer[tokLen - 1];
        buffer[tokLen - 1] = '\0';

        // Step 3
        if (scale == 'C') {
            cout << buffer << "C\t" << CtoK(convertString(buffer)) << "K" << endl;
        } else if (scale == 'F') {
            FconvFromStr[howManyF] = convertString(buffer);
            FconvToK[howManyF] = FtoK(FconvFromStr[howManyF]);
            howManyF++;
        } else {
            cout << "Error: scale not recognized" << endl;
            return -1;
        }

        pch = strtok(NULL, "@");
    }

    // Step 5 - print
    for (int i = 0; i < howManyF; i++) {
        cout << FconvFromStr[i] << "F\t" << FconvToK[i] << "K" << endl;
    }
}