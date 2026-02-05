#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q1. Given a Matrix of size n*m (n=rows and m= cols). Reverse each column of the matrix.
void reverse(vector<vector<int>> matrix, int row, int col)
{
    int index = row - 1;
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < col; j++)
        {
            swap(matrix[i][j], matrix[index][j]);
        }
        index--;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int row = matrix.size();
    int col = matrix[0].size();

    cout << "Matrix after reversing each column:\n";
    reverse(matrix, row, col);

    return 0;
}
