#include "expHomeMade.hpp"
#include "factorial.hpp"

double expHomeMade(int depth)
{
    double e = 0;
    for (int i = 0; i < depth; i++) {
        e += 1.0 / factorialIterative(i);
    }

    return e;
}