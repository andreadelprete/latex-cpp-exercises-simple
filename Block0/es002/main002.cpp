/*
    Scrivere un programma che chide all'utente due numeri 
    e ne calcola somma, prodotto, differenza, divisione
    e resto.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Insert number A: ";
    cin >> a;

    cout << "Insert number B: ";
    cin >> b;

    cout << "A + B = " << a + b << endl
         << "A * B = " << a * b << endl
         << "A - B = " << a - b << endl
         << "A / B = " << a / b << endl
         << "A % B = " << a % b << endl;

    return 0;
}