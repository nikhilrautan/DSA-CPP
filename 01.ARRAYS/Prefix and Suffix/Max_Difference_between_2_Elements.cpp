#include <iostream>
#include <limits.h>
using namespace std;

//Max Difference between 2 Element.
//Given an array of integers, the task is to find the maximum difference between any two elements such that larger element appears after the smaller number.  We mainly need to find maximum difference in an inversion (larger before smaller)
//Note: If no such pair exists, return -1.
int maxSubarrayDiff(int arr[], int n)
{
    int max = INT_MIN, suffix = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) // start n-2 se kia kyuki suffix m hum phle se wo last element ki value store kr k rkhenge
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

    return max; // to hmara biggest difference is array se hum return kra denge
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Difference = " << maxSubarrayDiff(arr, n) << endl;

    return 0;
}
