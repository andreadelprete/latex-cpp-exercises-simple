/*
    Scrivere un programma che scrive i numeri da 1 a 4 sulla stessa linea. 
    Ripetere tre volte lo stesso output utilizzando i seguenti metodi.
        Usando una sola volta cout e separando gli spazi dai numeri Es: "3" e " ".
        Usando una sola volta cout mantenendo gli spazi insieme ai numeri Es: "3 ".
        Usando quattro cout separati.

    Estensione: L'utente inserisce un numero e vengono stampati 
        i numeri da 1 al numero inserito. Provate a capire quale tra 
        le prime due opzioni è più efficiente.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "1"
         << " "
         << "2"
         << " "
         << "3"
         << " "
         << "4" << endl;
    cout << "1 "
         << "2 "
         << "3 "
         << "4" << endl;
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4" << endl
         << endl;

    // Exstension
    int limit;
    cout << "Insert limit of number printing: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

/*
    The second option is more efficient.
    This is because at each << call a new string
    needs to be constructed. Grouping together
    more stuff results in faster execution.
*/