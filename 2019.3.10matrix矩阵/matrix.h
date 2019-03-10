#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
class Matrix
{

public:

    Matrix(int r = 0, int c = 0);

    ~Matrix();

    void Input();

    void Output();

    Matrix& operator += (const Matrix&)£»

    Matrix operator+ (Matrix&);

    Matrix& operator = (Matrix&);

private:

    int rows;

    int cols;

    int **n;


};

#endif // MATRIX_H_INCLUDED
