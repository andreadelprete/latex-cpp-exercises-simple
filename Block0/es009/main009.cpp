/*
    Scrivere un programma che stampa la tabella ASCII in questo formato, 
    limitandosi alle lettere maiuscole, minuscole e le dieci cifre:
        CHAR: A ASCII: 65
        CHAR: B ASCII: 66
        CHAR: C ASCII: 67

    Info: Dato un intero i, il su corrispondente carattere ASCII 
    può essere ricavato tramite l'operatore di cast, quindi: 
    cout << (char) 65 stamperà A. Inoltre ricordare che invece 
    scrivendo int i = 'A' il valore di i sarà 65.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Printout of ASCII table values" << endl;

    for (int i = '0'; i <= '}'; i++) {
        cout << "CHAR: " << (char)i << "\tASCII: " << i << endl;

        // To avoid build warning:
        // cout << "CHAR: " << static_cast<char>(i) << "\tASCII: " << i << endl;
    }

    return 0;
}