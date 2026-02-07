#include <iostream>
#include <vector>
using namespace std;

// Optimized function to generate subsequence sums
void subseqSum(int arr[], int index, int n,
               int currentSum,
               vector<int> &ans)
{
    // Base case
    if (index == n)
    {
        ans.push_back(currentSum);
        return;
    }

    // Include current element
    subseqSum(arr, index + 1, n,
              currentSum + arr[index], ans);

    // Exclude current element
    subseqSum(arr, index + 1, n,
              currentSum, ans);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    vector<int> ans;

    subseqSum(arr, 0, n, 0, ans);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}
