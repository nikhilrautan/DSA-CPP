#include <iostream>
#include <vector>
using namespace std;

// Generate all subsets and their sums
void subseqSum(int arr[], int index, int n,
               vector<vector<int>> &ans,
               vector<int> &temp,
               vector<int> &sumArr,
               int sum)
{
    // Base case
    if (index == n)
    {
        ans.push_back(temp);      // Store subset
        sumArr.push_back(sum);    // Store its sum
        return;
    }

    // Include current element
    temp.push_back(arr[index]);
    subseqSum(arr, index + 1, n, ans, temp, sumArr, sum + arr[index]);

    // Backtrack
    temp.pop_back();

    // Exclude current element
    subseqSum(arr, index + 1, n, ans, temp, sumArr, sum);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> sumArr;

    subseqSum(arr, 0, n, ans, temp, sumArr, 0);

    // Print subsets with their sums
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Subset: ";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";

        cout << " | Sum = " << sumArr[i] << endl;
    }
}
