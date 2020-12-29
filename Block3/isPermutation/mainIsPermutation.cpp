/*
    Write a function named isPermutation that accepts 
    two strings s1 and s2 as parameters and returns 
    true if the strings are permutations of each other. 
    
    For example, the call of isPermutation("eats", "seat") should return true.

    https://www.codestepbystep.com/problem/view/cpp/algorithms/isPermutation
*/

#include "bubbleSort.hpp"
#include <cstring>
#include <iostream>

#define LEN 100

using namespace std;

bool isPermutation(char toCheck1[], char toCheck2[])
{
    // Start by comparing lengths
    int len = strlen(toCheck1);
    if (len != (int)strlen(toCheck2))
        return false;

    // One solution is to order che letters
    char* sorted1 = new char[len];
    char* sorted2 = new char[len];
    bubbleSortOpt(toCheck1, sorted1, len);
    bubbleSortOpt(toCheck2, sorted2, len);

    // And then campare is the arrays are equal
    for (int i = 0; i < len; i++)
        if (sorted1[i] != sorted2[i]) {
            delete[] sorted1;
            delete[] sorted2;

            return false;
        }

    delete[] sorted1;
    delete[] sorted2;
    return true;
}

int main()
{
    char input1[LEN];
    cout << "Enter string1 to check: ";
    cin.getline(input1, sizeof(input1));

    char input2[LEN];
    cout << "Enter string1 to check: ";
    cin.getline(input2, sizeof(input2));

    if (isPermutation(input1, input2))
        cout << "are permutable" << endl;
    else
        cout << "are not permutable" << endl;

    return 0;
}