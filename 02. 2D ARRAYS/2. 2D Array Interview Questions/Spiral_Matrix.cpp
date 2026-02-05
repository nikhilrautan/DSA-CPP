#include <iostream>
#include <vector>
using namespace std;

// Q2. Spiral Matrix.
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size(), col = matrix[0].size();
    int top = 0, right = col - 1, bottom = row - 1, left = 0;

    while (top <= bottom && left <= right)
    {
        // Print Top
        for (int j = left; j <= right; j++)
        {
            ans.push_back(matrix[top][j]);
        }
        top++;

        // Print Right
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Print Bottom
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // Print Left
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
