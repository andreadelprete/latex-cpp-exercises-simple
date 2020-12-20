#include "BOS.hpp"
#include <iostream>

using namespace std;

void bos(int r, int c)
{
    for (int i = 0; i < r; i++) {
        // Just first and last row
        if (i == 0 || i == (r - 1)) {
            for (int k = 0; k < c; k++) {
                cout << "*";
            }
        } else { // Every row in the middle
            cout << "*";
            for (int k = 1; k < (c - 1); k++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}