#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q3. Rotate by 90 degree
void rotateby90(vector<vector<int>> &matrix, int n)
{
    // code here
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
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

    int n = matrix.size();

    cout << "Original Matrix:\n";
    for (auto &row : matrix)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << endl;
    }

    rotateby90(matrix, n);

    cout << "\nMatrix after 90 degree rotation:\n";
    for (auto &row : matrix)
    {
        for (auto &val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
