#include<iostream>
#include<matrix.h>

Matrix&Matrix::operator +=(const Matrix&a)

{

  for (int i =0; i<rows; ++i)

        for(int j = 0; j< cols; ++j)

       n[i][j]=n[i][j] + a.n[i][j];

    return tem;

}

