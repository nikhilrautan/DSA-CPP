#include <iostream>
#include <vector>
using namespace std;

// Q3. Print Diagonally.
vector<int> downwardDiagonal(int N, vector<vector<int>> A)
{
    vector<int> ans;
    int row = 0, col = 0;

    // Upper half (including main diagonal)
    for (int i = 0; i < N; i++)
    {
        row = 0;
        col = i;
        while (row <= i && col >= 0)
        {
            ans.push_back(A[row][col]);
            row++;
            col--;
        }
    }

    // Lower half
    for (int i = 1; i < N; i++)
    {
        row = i;
        col = N - 1;
        while (row <= N - 1 && col >= i)
        {
            ans.push_back(A[row][col]);
            row++;
            col--;
        }
    }

    return ans;
}

int main()
{
    int N = 3;
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = downwardDiagonal(N, A);

    cout << "Diagonal Order: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
