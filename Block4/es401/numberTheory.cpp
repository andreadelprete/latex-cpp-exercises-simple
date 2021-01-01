#include "numberTheory.hpp"

bool isAbundant(int n)
{
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;

            if (sum > n) {
                return true;
            }
        }
    }
    return false;
}

bool isDeficient(int n)
{
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return n > sum || n == 1;
}

bool isAbundantPrimitive(int n)
{
    if (isAbundant(n)) {
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0) // If divisor
                if (!isDeficient(i)) // Is not deficient
                    return false; // Not AP
        
        return true; // Here only if all the other checks were ok
    } else {
        // Must be abundant in the first place
        return false;
    }
}

// To mask to the user the fact that
// the algorithm is recursive
bool isSemiPerfect(int n)
{
    return isSPRecursive(n, 0, 0);
}

// Not trivial
/*
    Essentially it explores every possible combination
    of divisors and the exit condition triggers the
    collapse to the return value when a sum is found that 
    is equal to the number n. 

    Since the multiplication is commutative, when a number
    is not SP, we are exploring a lot of possibilities already 
    explored before.
*/
bool isSPRecursive(int n, int sum, int div)
{
    for (int i = div + 1; i <= n / 2; i++) {
        if (n % i == 0) {
            if (sum + i == n || isSPRecursive(n, sum + i, i))
                return true;
        }
    }

    return false;
}


bool isWeird(int n) {
    return !isSemiPerfect(n) && isAbundant(n);
}
