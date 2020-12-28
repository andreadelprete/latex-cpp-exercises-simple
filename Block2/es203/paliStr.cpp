#include "paliStr.hpp"
#include <cstring>
#include <ctype.h>

#define L 100

void cleanStr(char toClean[], char cleaned[])
{
    // Strip string of punctuation character and lower all letters
    int offset = 0;
    int i;
    int len = strlen(toClean);
    for (i = 0; i < len; i++) {
        if (!ispunct(toClean[i])) {
            cleaned[i - offset] = tolower(toClean[i]);
        } else {
            offset++; // Counting how many punctuation points we have skipped
        }
    }
    // i is incremented one last time before
    // exiting the for loop (that's why is exits actually)
    // so we do not need to increment one here
    cleaned[i - offset] = '\0';
}

// Just check if palindrome
bool isPalindromeStr(char toCheck[])
{
    // Check if palindrome
    int cleanLen = strlen(toCheck);
    for (int i = 0; i < cleanLen / 2; i++) {
        // Compare beginning and end of the string
        if (toCheck[i] != toCheck[cleanLen - i - 1]) {
            return false;
        }
    }
}

// Combing the functions above
bool isPalindromeStrCleanBefore(char toCheck[])
{
    char* cleanedStr = new char[strlen(toCheck)];

    cleanStr(toCheck, cleanedStr);

    bool result = isPalindromeStr(cleanedStr);

    // Allocate and deallocate memory at the
    // same function call level
    delete[] cleanedStr;
    return result;
}

/*
    SIMPLE VERSION
    Since this block does not expect the student to be confindent
    with dynamic allocation, here is proposed a simpler approach
    that expects strings max 100 chars long
*/

#define L 100

bool isPalindromeStrSimple(char toCheck[])
{
    char cleanStr[L];
    int len = strlen(toCheck);

    // Strip string of punctuation character and lower all letters
    int offset = 0;
    int i;
    for (i = 0; i < len; i++) {
        if (!ispunct(toCheck[i])) {
            cleanStr[i - offset] = tolower(toCheck[i]);
        } else {
            offset++; // Counting how many punctuation points we have skipped
        }
    }
    // i is incremented one last time before
    // exiting the for loop (that's why is exits actually)
    // so we do not need to increment one here
    cleanStr[i - offset] = '\0';

    // Check if palindrome
    int cleanLen = strlen(cleanStr);
    for (i = 0; i < cleanLen / 2; i++) {
        // Compare beginning and end of the string
        if (cleanStr[i] != cleanStr[cleanLen - i - 1]) {
            return false;
        }
    }

    return true;
}