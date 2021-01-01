/*
    SUP che prende da riga di comando una frase e chiama funzioni che svolgono le seguenti operazioni,
    stampando per ognuna il risultato. Tutte le funzioni devono restituire void.
     Trova la lunghezza della stringa senza usare funzioni di libreria
     Crea una nuova stringa che contiene tutti i caratteri della stringa originale, ma separati da un
    carattere a scelta dell'utente. Esempio: "ciao" '@' diventa "c@i@a@o"
     Restituisce una nuova stringa che l'invertita rispetto all'originale.
     Conta il numero di parole, intese come delimitate da spazi, anche multipli e ad inizio stringa.
     Conta il numero di cifre e numero di segni di punteggiatura nella frase.
     Funzione che trova il carattere con più occorrenze e comunica al chiamante il carattere in questione
    e il numero di occorrenze.
*/

#include "strUtils.hpp"
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[] = "  ciao_bomber! cos  bombbbber2 ";

    int len;
    getLengthStr(str, len);
    cout << "Length: " << len << endl;

    char* temp = new char[len * 2];
    padStr(str, '-', temp);
    cout << "Padded: " << temp << endl;
    delete[] temp;

    temp = new char[len + 1];
    reverseStr(str, temp);
    cout << "Reversed: " << temp << endl;
    delete[] temp;

    int count;
    countWordsStr(str, count);
    cout << "Word count: " << count << endl;

    countNonAlpha(str, count);
    cout << "Non alpha count: " << count << endl;

    char mRep;
    mostRecurringStr(str, mRep, count);
    cout << "Most recurring char: '" << mRep
          << "' with " << count << " times" << endl;

    return 0;
}
