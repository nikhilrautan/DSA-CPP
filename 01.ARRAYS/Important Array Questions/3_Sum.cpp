#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Three Sum (simple solution without bubble sort)
bool find3Numbers(vector<int> &arr, int X)
{
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        int start = i + 1, end = n - 1;
        int target = X - arr[i];

        while (start < end)
        {
            int sum = arr[start] + arr[end];

            if (sum == target)
                return true;
            else if (sum > target)
                end--;
            else
                start++;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int X = 22;

    if (find3Numbers(arr, X))
        cout << "Yes, triplet exists" << endl;
    else
        cout << "No, triplet does not exist" << endl;

    return 0;
}
