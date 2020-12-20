#include "splitter.hpp"
#include "../es101/powInt.hpp"

int splitter(int toSplit, int index)
{
    return (toSplit / powInt(10, index) % 10);
}
