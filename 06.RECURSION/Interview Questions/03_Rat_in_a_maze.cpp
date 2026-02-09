#include <iostream>
#include <vector>
using namespace std;

// Directions: Up, Down, Left, Right
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};
string dir = "UDLR";

// Check if indices are inside grid
bool valid(int i, int j, int n)
{
    return i >= 0 && j >= 0 && i < n && j < n;
}

void total(vector<vector<int>> &matrix,
           int i, int j, int n,
           string &path,
           vector<string> &ans,
           vector<vector<bool>> &visited)
{
    // If reached destination
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;  // mark visited

    for (int k = 0; k < 4; k++)
    {
        int new_i = i + row[k];
        int new_j = j + col[k];

        if (valid(new_i, new_j, n) &&
            matrix[new_i][new_j] == 1 &&
            !visited[new_i][new_j])
        {
            path.push_back(dir[k]);          // choose
            total(matrix, new_i, new_j, n, path, ans, visited);
            path.pop_back();                 // backtrack
        }
    }

    visited[i][j] = 0;  // unmark before returning
}

int main()
{
    vector<vector<int>> matrix =
    {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int n = matrix.size();

    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, 0));
    string path = "";

    if (matrix[0][0] == 1)
        total(matrix, 0, 0, n, path, ans, visited);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}
