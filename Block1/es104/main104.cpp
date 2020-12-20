/*
    SUP che stampa senza sosta i multipli di due. Quindi 2, 4, 8, 16, eccetera. 
    Il loop è inFInito. Cosa succede e perché?
*/

#include <iostream>

#define STOP 61
#define LINEEND 5

using namespace std;

int main()
{
    int n = 2;
    int stop = 0;
    int lineEnd = 0;

    while(stop < STOP) {
        cout << (n *= 2) << "\t";

        // Periodically print a new line
        if(lineEnd > LINEEND) {
            cout << endl;
            lineEnd = 0;
        }

        lineEnd++;
        stop++;
    }

    return 0;
}

/*
    After enough cycles, the integer variable n overflows.
    In binary notation the powers of 2 are represented as
    a single bit set to one and the rest to zero. This "one"
    shifts left at each multiplication. 
    The first instance of overflow happens when the numbers
    shift abruptly to negative. The bits in the number are all
    zeros except for the most significative one, signaling a 
    negative number. From there on, the "one" virtually exits the
    register, leaving every bit set to zero.
*/