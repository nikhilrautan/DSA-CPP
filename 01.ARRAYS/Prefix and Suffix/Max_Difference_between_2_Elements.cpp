#include <iostream>
#include <limits.h>
using namespace std;

// Q3. Max Difference between 2 Element.
int maxSubarrayDiff(int arr[], int n)
{
    int max = INT_MIN, suffix = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        int diff = suffix - arr[i];
        if (diff > max)
        {
            max = diff;
        }
        if (arr[i] > suffix)
        {
            suffix = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Difference = " << maxSubarrayDiff(arr, n) << endl;

    return 0;
}
