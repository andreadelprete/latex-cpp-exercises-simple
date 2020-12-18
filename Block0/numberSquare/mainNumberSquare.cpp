/*
    Write a function named numberSquare that accepts two 
    integer parameters, a min and a max, and prints the numbers 
    in the range from min to max inclusive in a square pattern. 
    Each line of the square consists of a wrapping sequence of 
    integers increasing from min and max. The first line begins 
    with min, the second line begins with min + 1, and so on. 
    When the sequence in any line reaches max, it wraps around 
    back to min. You may assume that min is less than or equal 
    to max. 
    For example, the call of numberSquare(1, 5); should print: 
        12345
        23451
        34512
        45123
        51234

    https://www.codestepbystep.com/problem/view/cpp/basics/numberSquare

    NOTE: since at time of this block we didn't talked about
    functions yet, the code will be written in main.
*/

#include <iostream>

using namespace std;

int main()
{
    int limit;
    cout << "Insert printing limit: ";
    cin >> limit;

    // External loop gives a different start number
    for (int i = 1; i <= limit; i++) {
        // Internal loop prints number starting with current i
        for (int k = i, l = 0; l < limit; k++, l++) {
            // When going over limit we reset to one
            if (k > limit)
                k = 1;

            cout << k;
        }
        cout << endl;
    }

    return 0;
}
