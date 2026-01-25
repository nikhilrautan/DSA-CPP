#include <iostream>
#include <vector>
using namespace std;

// Q2. The Painter's Partition Problem.
long long minTime(vector<int> &arr, int k)
{
    int n = arr.size();
    if (k > n) return -1;

    long long start = 0, end = 0, ans = -1, mid;

    for (int i = 0; i < n; i++)
    {
        if (start < arr[i])
            start = arr[i];
        end += arr[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        long long pages = 0, count = 1;

        for (int i = 0; i < n; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {
                count++;
                pages = arr[i];
            }
        }

        if (count <= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int k = 2;

    cout << "Minimum time = " << minTime(arr, k) << endl;

    return 0;
}
