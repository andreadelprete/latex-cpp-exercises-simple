#include "strUtils.hpp"
#include "bubbleSort.hpp"
#include <ctype.h>

void getLengthStr(char str[], int& out)
{
    out = 0;
    while (str[out++] != '\0')
        ;

    out--; // Excluding terminator char
}

void padStr(char str[], char padder, char out[])
{
    int len;
    getLengthStr(str, len);

    for (int i = 0; i < len; i++) {
        out[i * 2] = str[i];
    }

    for (int i = 0; i < len - 1; i++) {
        out[i * 2 + 1] = padder;
    }

    out[len * 2 - 1] = '\0';
}

void reverseStr(char str[], char out[])
{
    int len;
    getLengthStr(str, len);
    for (int i = 0; i < len; i++) {
        out[len - i - 1] = str[i];
    }
    out[len] = '\0';
}

void countWordsStr(char str[], int& out)
{
    out = 0;
    int len;

    getLengthStr(str, len);

    int i = 0;
    // Avoid spaces at beginning
    while (str[i++] == ' ' && i < len)
        ;

    while (i < len) {
        if (str[i] == ' ') {
            // Avoid mutiple spaces
            while (str[i++] == ' ' && i < len)
                ;

            out++;
        } else {
            i++;
        }
    }
}

void countNonAlpha(char str[], int& out)
{
    out = 0;
    int len;
    getLengthStr(str, len);

    for (int i = 0; i < len; i++) {
        if (!isalpha(str[i]))
            out++;
    }
}

void mostRecurringStr(char str[], char& outChr, int& outCount)
{
    int len;
    getLengthStr(str, len);

    char* ordered = new char[len + 1];
    bubbleSortOpt(str, ordered, len);

    outCount = 0;

    char pMaxChar = ordered[0];
    int pMaxOcc = 1;
    for (int i = 1; i < len; i++) {
        // Continue counting same char
        if (pMaxChar == ordered[i])
            pMaxOcc++;
        else { // When this char is done
            // If this char was more present that
            // current max, update with new winner
            if (pMaxOcc > outCount) {
                outChr = pMaxChar;
                outCount = pMaxOcc;
            }

            // Reset counting to next char
            pMaxOcc = 1;
            pMaxChar = ordered[i];
        }
    }

    delete[] ordered;
}