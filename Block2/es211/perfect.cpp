#include "perfect.hpp"
#include <cmath>

bool isPerfect(int n)
{
    if (n < 1) // Avoid edge cases
        return false;

    int sum = 1; // 1 is always divisor

    int limit = n / 2;
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}