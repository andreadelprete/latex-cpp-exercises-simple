/*
    Write a function named compressString that accepts a string as 
    a parameter and returns a new string that replaces repeated 
    characters with a single occurrence of that character followed 
    by the number of its occurrences. For example, the call of 
    compressString("AABAAABBBCCCCDEEEEEE") should return "A2B1A3B3C4D1E6".

    https://www.codestepbystep.com/problem/view/cpp/algorithms/compressString
*/

#include <cstdio>
#include <cstring>
#include <iostream>

#define LEN 100

using namespace std;

char* compressString(char toCompress[])
{
    int len = (int)strlen(toCompress);

    // Since this compression algorithm sucks hard,
    // if there are no repetitions the output string is
    // actually double the original one in size
    char* out = new char[len * 2] { '\0' };

    char c = toCompress[0];
    int count = 1;
    // Note the <= so that at the last cycle
    // we force to append last char
    // by comparing it with the termination character
    for (int i = 1; i <= len; i++) {
        if (c == toCompress[i]) {
            count++;
        } else {
            char cStr[10];
            sprintf(cStr, "%c%d", c, count);
            strcat(out, cStr);

            c = toCompress[i];
            count = 1;
        }
    }
    return out;
}

int main()
{
    char input[LEN];
    cout << "Enter string to compress: ";
    cin.getline(input, sizeof(input));

    char* res = compressString(input);
    cout << res << endl;

    delete[] res;
    return 0;
}