#include "matrix.hpp"
#include <iostream>

// Print
void printMatrix(Matrix* m)
{
    if (m==nullptr)
    {   
        std::cout << "Trying to print null matrix." << std::endl;
        return;
    }
    
    for (int r = 0; r < m->r; r++) {
        for (int c = 0; c < m->c; c++) {
            std::cout << m->d[r * m->c + c];
            if (m->d[r * m->c + c] > 0)
                std::cout << "  ";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}

// Allocate and initialize matrix
Matrix* createMatrix(int r, int c, float val)
{
    Matrix* m = new Matrix;
    m->d = new float[r * c];
    m->r = r;
    m->c = c;

    // Init values
    for (int i = 0; i < r * c; i++) {
        m->d[i] = val;
    }

    return m;
}

// Initialize matrix from array
void initMatrix(Matrix* m, float vals[])
{
    for (int i = 0; i < m->r * m->c; i++) {
        m->d[i] = vals[i];
    }
}

// Deallocate matrix
void destroyMatrix(Matrix* m)
{
    delete[] m->d;
    delete m;
    m = nullptr;
}

// Add
Matrix* addMatrix(Matrix* m1, Matrix* m2)
{
    if (m1 == nullptr || m2 == nullptr)
        return nullptr;

    if (m1->r != m2->r || m1->c != m2->c)
        return nullptr;

    Matrix* res = createMatrix(m1->r, m1->c);
    for (int i = 0; i < m1->r * m1->c; i++) {
        res->d[i] = m1->d[i] + m2->d[i];
    }

    return res;
}

// Sub
Matrix* subMatrix(Matrix* m1, Matrix* m2)
{
    if (m1 == nullptr || m2 == nullptr)
        return nullptr;

    if (m1->r != m2->r || m1->c != m2->c)
        return nullptr;

    Matrix* res = createMatrix(m1->r, m1->c);
    for (int i = 0; i < m1->r * m1->c; i++) {
        res->d[i] = m1->d[i] - m2->d[i];
    }

    return res;
}

// Mul
Matrix* mulMatrix(Matrix* m1, Matrix* m2)
{
    if (m1 == nullptr || m2 == nullptr)
        return nullptr;

    if (m1->c != m2->r)
        return nullptr;

    Matrix* res = createMatrix(m1->r, m2->c, 0);
    for (int r = 0; r < m1->r; r++)
        for (int c = 0; c < m2->c; c++)
            for (int i = 0; i < m1->c; i++)
                res->d[r * m2->c + c] += m1->d[r * m1->c + i] * m2->d[i * m2->c + c];

    return res;
}

// Tra
void traMatrix(Matrix* m)
{
    float* buff = new float[m->c * m->r];

    for (int r = 0; r < m->c; r++)
        for (int c = 0; c < m->r; c++)
            buff[r * m->r + c] = m->d[c * m->c + r];

    delete[] m->d;
    m->d = buff;

    int t = m->c;
    m->c = m->r;
    m->r = t;
}