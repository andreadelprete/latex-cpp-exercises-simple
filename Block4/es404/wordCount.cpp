#include "wordCount.hpp"
#include "libVA.hpp"
#include <cstring>
#include <ctype.h>

// From es203
void cleanStr(char toClean[], char cleaned[])
{
    // Strip string of punctuation character and lower all letters
    int offset = 0;
    int i;
    int len = (int) strlen(toClean);
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

theStruct** lineElab(theStruct** VA, const char line[])
{
    char* buffer = new char[strlen(line) + 1];
    char* cleaned = new char[strlen(line) + 1];

    strcpy(buffer, line);

    // Split line into words analyzing one by one
    char* pch = strtok(buffer, " '");
    while (pch != NULL) {
        cleanStr(pch, cleaned);

        VA = wordElab(VA, cleaned);

        pch = strtok(NULL, " '");
    }

    delete[] buffer;
    delete[] cleaned;

    return VA;
}

theStruct** wordElab(theStruct** VA, char word[])
{
    // Search if word already present
    for (int i = 0; getVAElement(VA, i) != NULL; i++) {
        if (strcmp(getVAElement(VA, i)->word, word) == 0) {
            getVAElement(VA, i)->occurrences++;
            return VA;
        }
    }

    // If we are here, the word was not found
    theStruct* s = new theStruct;
    s->occurrences = 1;
    strcpy(s->word, word);
    return addToVA(VA, s);
}