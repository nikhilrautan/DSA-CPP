#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Allocate minimum number of pages
int findPages(vector<int> &arr, int k)
{
    int n = arr.size();

    if (k > n)
        return -1;

    int start = 0, end = 0, ans = -1, mid;

    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);  // minimum possible answer
        end += arr[i];              // maximum possible answer
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int pages = 0, count = 1;

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
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;

    cout << "Minimum pages = " << findPages(arr, k) << endl;

    return 0;
}
