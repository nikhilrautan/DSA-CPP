#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// Q1. Maximum prefix sum for a given range.
vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q)
{
    vector<int> ans(Q);

    for (int i = 0; i < Q; i++)
    {
        int prefix = 0, maxi = INT_MIN;
        for (int j = L[i]; j <= R[i]; j++)
        {
            prefix += a[j];
            maxi = max(maxi, prefix);
            // if(prefix < 0)
            //     prefix = 0;
        }

        ans[i] = maxi;
    }

    return ans;
}

int main()
{
    int a[] = {1, -2, 3, 4, -1, 2};
    int N = sizeof(a) / sizeof(a[0]);

    int L[] = {0, 2};
    int R[] = {3, 5};
    int Q = sizeof(L) / sizeof(L[0]);

    vector<int> result = maxPrefixes(a, L, R, N, Q);

    cout << "Maximum prefix sums for each query:" << endl;
    for (int i = 0; i < Q; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
