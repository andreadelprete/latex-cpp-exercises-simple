#include <cmath>
#include <iostream>

#define MAX 10

using namespace std;

int main()
{
    cout << "Number of students (" << MAX << "): ";
    int max;
    cin >> max;

    // Check if in bounds
    if (max > MAX) {
        cout << "Too many students. Exiting." << endl;
        return -1;
    }

    int sum = 0; // That's right, no arrays needed
    for (int i = 0; i < max; i++) {
        int temp;
        cout << "Insert grade(" << i << "): ";
        cin >> temp;

        sum += temp;
    }

    cout << "Mean grade: " << round((float)sum / max) << endl;

    return 0;
}