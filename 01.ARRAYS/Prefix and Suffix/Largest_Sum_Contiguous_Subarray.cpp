#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

// (Kadane's Algo).
long long maxSubarraySum(int arr[], int n)
{
    // Your code here
    long long maxi = INT_MIN, prefix = 0;
    for (int i = 0; i < n; i++) // ek for loop chlaenge 
    {
        prefix += arr[i]; 
        maxi = max(maxi, prefix);
        if (prefix < 0) // jb bhi prefix(sum) ki value negative aae to usko zero krdo kyuki usse judke aaghe wali value bhi choti ho jaegii
            prefix = 0;
    }

    return maxi; // last m jo maximum continuous subarray milega usko return kr denge
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Subarray Sum = " << maxSubarraySum(arr, n) << endl;

    return 0;
}
