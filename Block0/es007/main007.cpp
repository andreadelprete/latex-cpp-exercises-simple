/*
    Scrivere un programma che prende 
    un intero e verifica se questo 
    è pari o dispari e scrive qualcosa a proposito.
*/

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Insert number A: ";
    cin >> a;

    if (a % 2 == 0)
        cout << "A is even" << endl;
    else
        cout << "A is odd" << endl;

    return 0;
}