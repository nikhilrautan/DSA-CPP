#include <iostream>
#include <vector>
using namespace std;

// Function to generate all subsequences
void subseq(int arr[], int index, int n,
            vector<vector<int>> &ans,
            vector<int> &temp)
{
      // Base case: when index reaches end
    if (index == n)
    {
        ans.push_back(temp);   // Store current subsequence
        return;
    }
    // Include current element
    temp.push_back(arr[index]);
    subseq(arr, index + 1, n, ans, temp);

    // Backtrack (remove last element)
    temp.pop_back();

    // Exclude current element
    subseq(arr, index + 1, n, ans, temp);
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    vector<vector<int>> ans;
    vector<int> temp;

    subseq(arr, 0, n, ans, temp);

    // Print all subsequences
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";

        cout << endl;
    }
}
