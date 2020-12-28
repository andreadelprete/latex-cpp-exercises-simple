/*
    SUP che sceglie un numero a random tra 1 e 1000. 
    Usare la funzione rand per fare questo. L'utente poi
    inserisce numeri fintanto che non azzecca la risposta corretta. 
    Il programma guida l'utente rispondendo se il tentativo 
    era maggiore o minore del numero estratto. 
    È una ricerca di tipo binario.
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

#define MAX 1000

using namespace std;

int main()
{
    srand(time(NULL));
    int toGuess = rand() % MAX;

    int in;
    do {
        cout << "Take a guess:";
        cin >> in;
        if (in > toGuess)
            cout << "High" << endl;
        else if (in < toGuess)
            cout << "Low" << endl;

    } while (in != toGuess);

    cout << "Got it: " << toGuess << endl;
        
    return 0;
}