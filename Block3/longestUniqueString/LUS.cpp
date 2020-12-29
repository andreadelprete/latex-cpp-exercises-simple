#include "LUS.hpp"
#include <cstring>

int longestUniqueString(char toCheck[])
{
    // Longest char non-repetition can be at most 26 chars long
    // at it would contain the whole alphabet
    char alphabet[26] = { '\0' };
    alphabet[0] = toCheck[0];

    int len = strlen(toCheck);

    int count = 1;
    int countMax = 1;
    for (int i = 1; i < len; i++) {
        // Check is we already encounter this character in this run
        if (constains(alphabet, toCheck[i])) {
            // Check is this run was better than the previous ones
            if (count > countMax) {
                countMax = count;
            }
            // Reset previous encounters
            alphabet[0] = toCheck[i];
            alphabet[1] = '\0';

            count = 1;
        } else {
            // Concatenate new char to current run record
            char cStr[2];
            cStr[0] = toCheck[i];
            cStr[1] = '\0';
            strcat(alphabet, cStr);
            count++;
        }
    }

    return countMax;
}

bool constains(char toCheck[], char tok)
{
    int len = strlen(toCheck);

    for (int i = 0; i < len; i++)
        if (toCheck[i] == tok)
            return true;

    return false;
}