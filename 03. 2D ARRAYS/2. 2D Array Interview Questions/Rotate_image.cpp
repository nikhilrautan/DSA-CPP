#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q1. Rotate Image.
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // Transpose
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    for (auto &row : matrix)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << endl;
    }

    rotate(matrix);

    cout << "\nRotated Matrix (90 degree clockwise):\n";
    for (auto &row : matrix)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
