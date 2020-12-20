/*
    Write a function named boxOfStars that accepts two integer parameters 
    representing a width and height in characters, and prints to the console 
    a 'box' figure whose border is * stars and whose center is made of spaces. 
    For example, the call of boxOfStars(8, 5); should print the following output:

        ********
        *      *
        *      *
        *      *
        ********
    
    You may assume that the values passed for the width and height are at least 2.

    https://www.codestepbystep.com/problem/view/cpp/parameters/boxOfStars
*/

#include <iostream>
#include "BOS.hpp"

using namespace std;

int main()
{
    int r, c;
    cout << "Insert box rows: ";
    cin >> r;
    cout << "Insert box columns: ";
    cin >> c;

    bos(r, c);

    return 0;
}
