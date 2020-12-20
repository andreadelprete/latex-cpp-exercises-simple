#include "factorial.hpp"

unsigned long long factorialRecursive(int n)
{
    if (n == 0)
        return 1;

    return (unsigned long long)n * factorialRecursive(n - 1);
}

unsigned long long factorialIterative(int n)
{
    if (n == 0) {
        return 1;
    }

    unsigned long long f = (unsigned long long)n;
    while (n > 1) {
        f *= (unsigned long long)--n;
    }

    return f;
}