/*
    Libreria di funzioni che modelli matrici usando le struct.
    La libreria dovrebbe fornire funzioni per
    creare e distruggere matrici, oltre che implementare 
    funzioni per le operazioni di addizione, sottrazione e
    trasposizione. Fare dovuti controlli dimensionali per 
    verificare che le operazioni tra le matrici coinvolte
    possano essere effettivamente svolte. 
    Per i più temerari c'è la sfida del calcolo del determinante 
    e decine di altre operazioni matriciali.

    Info: Si consiglia che la struttura usi un array 
    monodimensionale per contenere i valori della matrice 
    e due interi che contengano i numeri di righe e colonne. 
    È possibile usare anche un array bidimensionale, 
    ma seppur può sembrare più intuitivo, non è la soluzione 
    tipicamente usata in librerie di algebra lineare.
*/

#include "matrix.hpp"
#include <iostream>

using namespace std;

int main()
{
    // M1
    float m1Data[] = { 7, 4, 1, 0, -3, -9, -1, 12, 5, -6, 3, 1, 17 };
    Matrix* m1 = createMatrix(3, 4);
    initMatrix(m1, m1Data);
    printMatrix(m1);

    // M2
    float m2Data[] = { 4, -8, -6, 3, 4, -10, 1, 4, 7, -2, 5, 7, 2 };
    Matrix* m2 = createMatrix(4, 3);
    initMatrix(m2, m2Data);
    printMatrix(m2);

    // M2 transposed
    Matrix* m2Tra = createMatrix(4, 3);
    initMatrix(m2Tra, m2->d);
    traMatrix(m2Tra);
    printMatrix(m2Tra);

    // Addition
    cout << "m1 + m2Tra:" << endl;
    Matrix* res = addMatrix(m1, m2Tra);
    printMatrix(res);
    destroyMatrix(res);

    // Subtraction
    cout << "m1 - m2Tra:" << endl;
    res = subMatrix(m1, m2Tra);
    printMatrix(res);
    destroyMatrix(res);

    // Multiplication
    cout << "m1 * m2:" << endl;
    res = mulMatrix(m1, m2);
    printMatrix(res);
    destroyMatrix(res);

    return 0;
}