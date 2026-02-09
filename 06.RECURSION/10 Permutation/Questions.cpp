#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Generate unique permutations
void permut(vector<int> &arr, vector<vector<int>> &ans, int index)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    unordered_set<int> used;  // To avoid duplicates at this level

    for (int i = index; i < arr.size(); i++)
    {
        if (used.find(arr[i]) == used.end())
        {
            used.insert(arr[i]);

            swap(arr[index], arr[i]);
            permut(arr, ans, index + 1);
            swap(arr[index], arr[i]);   // Backtrack
        }
    }
}

const int MOD = 1000000007;

// Count ways to form sum
int way(int arr[], int m, int sum)
{
    if (sum == 0)
        return 1;

    if (sum < 0)
        return 0;

    long long ans = 0;

    for (int i = 0; i < m; i++)
    {
        ans += way(arr, m, sum - arr[i]);
        ans %= MOD;
    }

    return ans;
}