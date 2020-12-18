/*
    Scrivere un programma completo che chiede all'utente 
    tre numeri interi e ne calcola il prodotto.
    Occhio: Se invece venisse chiesto di chiedere dieci numeri?
*/

#include <iostream>

#define HOWMANY 3
//#define HOWMANY 10

using namespace std;

int main()
{

    cout << "Insert " << HOWMANY << " integers to multiply." << endl;

    int product = 1;
    for (int i = 0; i < HOWMANY; i++) {
        cout << "Insert number " << i << ": ";
        int in;
        cin >> in;

        product *= in;
    }

    cout << "The result is: " << product << endl;

    return 0;
}
