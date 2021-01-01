#ifndef STRUTILS_H
#define STRUTILS_H

void getLengthStr(char str[], int &out);

void padStr(char str[], char padder, char out[]);

void reverseStr(char str[], char out[]);

void countWordsStr(char str[], int &out);

void countNonAlpha(char str[], int &out);

void mostRecurringStr(char str[], char &outChr, int &outCount);

#endif