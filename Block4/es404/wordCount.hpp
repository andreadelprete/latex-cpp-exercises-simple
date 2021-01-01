#ifndef WORDCOUNT_H
#define WORDCOUNT_H

#include "theStruct.hpp"

// From es203
void cleanStr(char toClean[], char cleaned[]);

theStruct** lineElab(theStruct** VA, const char line[]);

theStruct** wordElab(theStruct** VA, char word[]);

#endif