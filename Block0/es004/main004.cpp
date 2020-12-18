/*
    Scrivere un programma che chide all'utente di inserire due interi, 
    e poi scrive il numero più grande seguito dalla string " is larger". 
    Se i due numeri sono uguali, scrivi il messaggio "These numbers
    are equal".
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

    if (a > b)
        cout << "A is larger" << endl;
    else if (a < b)
        cout << "B is larger" << endl;
    else
        cout << "These numbers are equal" << endl;

    return 0;
}