/*
SUP che si fa dare due numeri interi x e y e calcola xy. Fare due versioni, una che per il loop interno
usa for, l'altra che usa while. Non usare pow(), questo perché se andate a leggere la documentazione,
vedrete che prende in ingresso due double, significa quindi che al suo interno non compie un elevamento a
potenza tra interi, ma tra numeri reali. Pur permettendoci di ottenere lo stesso risultato, questo implica
che l'esecuzione sarà ben più lenta e inoltre potremmo imbatterci in errori numerici.
*/

#include <iostream>
#include "powInt.hpp"

using namespace std;

int main()
{
    int x, y;

    // User prompt
    cout << "Insert base x: ";
    cin >> x;

    cout << "Insert exponent y: ";
    cin >> y;

    // Print result
    cout << x << "^" << y << " = "
         << powInt(x, y) << endl;

    return 0;
}
