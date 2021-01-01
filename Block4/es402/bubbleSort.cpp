#include "bubbleSort.hpp"

// Bubble sorting an array, optimization
// arr: input array
// out: result array, sorted asc
// len: length of the arrays
void bubbleSortOpt(char arr[], char out[], int len)
{
    // Copying input array in result
    for (int i = 0; i < len; i++) {
        out[i] = arr[i];
    }

    bool swap;
    int decLen = len - 1;
    do { // Pass
        swap = false;
        // Sweep
        for (int i = 0; i < decLen; i++) {
            // Bubble
            if (out[i] > out[i + 1]) {
                char temp = out[i];
                out[i] = out[i + 1];
                out[i + 1] = temp;

                swap = true;
            }
        }
        decLen--;
        // Continue until there are no more swaps
    } while (swap);
}