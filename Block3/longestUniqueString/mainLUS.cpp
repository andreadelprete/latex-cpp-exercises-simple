/*
    Write a function named longestUniqueString that accepts a string 
    as a parameter and returns an integer representing the longest 
    substring that can be formed from it without any repeated characters. 
    For example, the call of longestUniqueString("abcabcab") should 
    return 3 because its longest such substring is "abc". 
    The call of longestUniqueString("aaaa") should return 1 because its 
    longest such substring is "a". 
    The call of longestUniqueString("abbbcbbbacddb") should return 4
    because its longest such substring is "bacd". ("abcd" or "abcde" 
    are not valid because they are subsequences, not substrings.)

    If the string is empty, return 0. You may assume that the string 
    contains only standard ASCII characters (no extended Unicode 
    character values).

    https://www.codestepbystep.com/problem/view/cpp/algorithms/longestUniqueString
*/

#include <iostream>
#include "LUS.hpp"

#define LEN 100

using namespace std;

int main()
{
    char input[LEN];
    cout << "Enter string to find LUS: ";
    cin.getline(input, sizeof(input));

    cout << longestUniqueString(input);

    return 0;
}