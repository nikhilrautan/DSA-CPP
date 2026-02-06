#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted halves in descending order
void mergeDesc(int arr[], int start, int mid, int end)
{
    // Temporary array to store merged result
    vector<int> temp(end - start + 1);

    int left = start;      // Starting index of left half
    int right = mid + 1;   // Starting index of right half
    int index = 0;         // Index for temp array

    // Compare elements from both halves
    while (left <= mid && right <= end)
    {
        // For descending order, pick larger element first
        if (arr[left] >= arr[right])
            temp[index++] = arr[left++];
        else
            temp[index++] = arr[right++];
    }

    // Copy remaining elements of left half (if any)
    while (left <= mid)
        temp[index++] = arr[left++];

    // Copy remaining elements of right half (if any)
    while (right <= end)
        temp[index++] = arr[right++];

    // Copy sorted elements back to original array
    index = 0;
    while (start <= end)
        arr[start++] = temp[index++];
}

// Recursive function to divide the array
void mergeSortDesc(int arr[], int start, int end)
{
    // Base case: single element is already sorted
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Sort left half
    mergeSortDesc(arr, start, mid);

    // Sort right half
    mergeSortDesc(arr, mid + 1, end);

    // Merge both halves
    mergeDesc(arr, start, mid, end);
}

int main()
{
    int arr[] = {1, 5, 3, 7, 2};
    int n = 5;

    mergeSortDesc(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
