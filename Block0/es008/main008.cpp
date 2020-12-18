/*
    Scrivere un programma che prende due numeri interi 
    e determina se il primo è un multiplo del secondo.
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

    if (a % b == 0)
        cout << "A is a multiple of B" << endl;
    else
        cout << "A is not a multiple of B" << endl;

    return 0;
}