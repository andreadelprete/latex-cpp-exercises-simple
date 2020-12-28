#include "findBigger.hpp"

int findBigger(int arr[], int len)
{
    int max = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

void findBiggerTwo(int arr[], int len, int out[])
{
    out[0] = findBigger(arr, len);

    out[1] = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] > out[1] && arr[i] != out[0]) {
            out[1] = arr[i];
        }
    }
}