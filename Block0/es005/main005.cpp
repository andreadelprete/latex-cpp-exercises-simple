/*
    Scrivere un programma che legge tre numeri e 
    calcola la somma, la media, il prodotto, 
    il più grande e il più piccolo.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Insert number A: ";
    cin >> a;

    cout << "Insert number B: ";
    cin >> b;

    cout << "Insert number C: ";
    cin >> c;

    cout << "Sum is: " << a + b + c << endl
         << "Average is: " << (a + b + c) / 3.0 << endl
         << "Product is: " << a * b * c << endl;

    // Find the biggest
    if (a > b && a > c)
        cout << "A is the biggest" << endl;
    else if (b > a && b > c)
        cout << "B is the biggest" << endl;
    else if (c > a && c > b)
        cout << "C is the biggest" << endl;

    // Find the smallest
    if (a < b && a < c)
        cout << "A is the smallest" << endl;
    else if (b < a && b < c)
        cout << "B is the smallest" << endl;
    else if (c < a && c < b)
        cout << "C is the smallest" << endl;

    return 0;
}