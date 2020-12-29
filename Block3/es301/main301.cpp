/*
    SUP che prende una stringa del tipo "923D" ed estrae 
    il numero, convertendolo in int. La lettera D è sempre 
    alla fine della stringa. Verificare il funzionamento anche 
    con numeri negativi. Esistono diversi modi per fare 
    questa conversione, ma probabilmente la soluzione più 
    semplice è usare il metodo nativo C++, che è la prima 
    soluzione proposta dal sito.
*/

#include <cstring>
#include <iostream>
#include <sstream>

#define LEN 10

using namespace std;

int convertString(char* str)
{
    std::string input(str);
    std::stringstream strStream(input);

    int result;

    strStream >> result;

    if (!str) {
        // The conversion failed
        cout << "Failed parsing input parameters" << endl;
    }

    return result;
}

int main()
{
    cout << "String with number and final D: ";

    char input[LEN];
    cin >> input;

    // Check if final letter is truly a D
    int len = strlen(input);
    if (input[len - 1] != 'D') { // Get mad
        cout << "Input does not respect expected format." << endl;
        return -1;
    }

    // Overwriting the final D
    input[len - 1] = '\0';

    cout << "Parsed number: " << convertString(input) << endl;

    return 0;
}