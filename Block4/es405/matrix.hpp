#ifndef MATRIX_H
#define MATRIX_H

/*
    Keep in mind that there are many ways to 
    solve the same problem
*/

struct Matrix
{
    float * d;
    int r, c;
};

// Print 
void printMatrix(Matrix * m);

// Allocate and initialize matrix
Matrix * createMatrix(int r, int c, float val = 0);

// Initialize matrix from array
void initMatrix(Matrix * m, float vals[]);

// Deallocate matrix
void destroyMatrix(Matrix * m);

// Add
Matrix * addMatrix(Matrix * m1, Matrix * m2);

// Sub
Matrix * subMatrix(Matrix * m1, Matrix * m2);

// Mul
Matrix * mulMatrix(Matrix * m1, Matrix * m2);

// Tra
void traMatrix(Matrix * m);

#endif