#include <iostream>
#include <vector>
using namespace std;

// Merge two halves and count inversions
long long mergeAndCount(long long arr[], long long start, long long mid, long long end)
{
    vector<long long> temp(end - start + 1);

    long long left = start;       // Left subarray pointer
    long long right = mid + 1;    // Right subarray pointer
    long long index = 0;
    long long invCount = 0;       // Stores inversion count

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            // All remaining elements in left half form inversion
            invCount += (mid - left + 1);
            temp[index++] = arr[right++];
        }
    }

    // Copy remaining elements
    while (left <= mid)
        temp[index++] = arr[left++];

    while (right <= end)
        temp[index++] = arr[right++];

    // Copy sorted elements back to original array
    index = 0;
    while (start <= end)
        arr[start++] = temp[index++];

    return invCount;
}

// Recursive merge sort function that also counts inversions
long long mergeSortAndCount(long long arr[], long long start, long long end)
{
    // Base case
    if (start >= end)
        return 0;

    long long mid = start + (end - start) / 2;

    // Count inversions in left half
    long long leftCount = mergeSortAndCount(arr, start, mid);

    // Count inversions in right half
    long long rightCount = mergeSortAndCount(arr, mid + 1, end);

    // Count cross inversions while merging
    long long mergeCount = mergeAndCount(arr, start, mid, end);

    return leftCount + rightCount + mergeCount;
}

// Function to calculate total inversions
long long inversionCount(long long arr[], long long N)
{
    return mergeSortAndCount(arr, 0, N - 1);
}

int main()
{
    long long arr[] = {2, 4, 1, 3, 5};
    long long n = 5;

    cout << "Inversions: " << inversionCount(arr, n);
}
