#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

void lower_t(int matrix[32][32], int row, int col)
{
    matrix[row][col];
    int size = row * col;
    int B[size];

    int i, j;
    int x = 0;
    for (i = 0; i < row; i++)                // compute the indexes into an array.
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << "0"
                     << " ";
            }
            else
            {
                cout << matrix[i][j] << "  ";
                B[x] = matrix[i][j];
                ++x;
            }
        }
        cout << endl;
    }
    cout << "The first 20 values of the lower triangular elements of A[8][8]:";
    for (i = 0; i < 20; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
}

void LinearIndx(int matrix[32][32], int row, int col, int m, int n)
{
    int B[(row * col) * ((row * col) + 1) / 2];
    int i, j;
    int x = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            B[x] = matrix[i][j];
            ++x;
        }
    }

    cout << "Elements In Array" << endl;
    for (i = 0; i < x; i++)
    {
        cout << B[i] << ", ";
    }
    cout << endl;

    int y = 0;
    for (int i = 0; i < x; ++i)
    {
        if (B[i] == matrix[m][n])
        {
            cout << "The index of"
                 << " " << matrix[m][n] << " "
                 << "in the array is"
                 << " " << i << endl;
        };
    }
}
void InverseIndx(int matrix[32][32], int row, int col, int U)
{
    int B[(row * col) * ((row * col) + 1) / 2];
    int i, j;
    int x = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            B[x] = matrix[i][j];
            ++x;
        }
    }

    cout << "Elements In Array" << endl;
    for (i = 0; i < x; i++)
    {
        cout << B[i] << ", ";
    }
    cout << endl;

    for (i = 0; i < row; i++)                 // compute the reverse of the indexes
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] == B[U])
            {
                cout << "The index of"
                     << " " << B[U] << " "
                     << "in the matrix is"
                     << " "
                     << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}

  // the main method to run the program

int main()
{

    int p = 0;

    int A[32][32];
    int row = 32, col = 32;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            A[i][j] = rand() % 1000 + 1;
            ;
        }
    }
    int size = row * col;
    int B[size];
    int C[size][size];

    int i, j;
    int x = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                cout << " " << " ";
            }
            else
            {
                B[x] = A[i][j];
                C[i][j] = B[x];

                ++x;
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "The first 20 values of the lower trinagular elements of A[32][32]:";
    for (i = 0; i < 20; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (A[i][j] == B[p] && p != 20)
            {
                cout << "Index of"
                     << " " << B[p] << " "
                     << "in the matrix is"
                     << " "
                     << "(" << i << "," << j << ")" << endl;
                ++p;
            };
        }
    }

    cout << endl;
    cout << "The first 20 elements of B[] and their respective indices;" << endl;
    for (i = 0; i < 20; i++)
    {
        cout << "Index of"
             << " " << B[i] << " "
             << "in the array is"
             << " " << i << endl;
    }
    cout << endl;
    cout << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 11; j++)
        {
            cout << "The index of"
                 << " " << C[i][j] << " "
                 << "in The matrix is"
                 << " "
                 << "(" << i << "," << j << ")" << endl;
        }
    }
}