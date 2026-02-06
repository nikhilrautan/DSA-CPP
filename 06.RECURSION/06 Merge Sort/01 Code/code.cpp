#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted halves of the array
void merge(int arr[], int start, int mid, int end)
{
    // Temporary array to store merged result
    vector<int> temp(end - start + 1);

    int left = start;      // Starting index of left half
    int right = mid + 1;   // Starting index of right half
    int index = 0;         // Index for temp array

    // Compare elements from both halves and store smaller one
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }

    // Copy remaining elements from left half (if any)
    while (left <= mid)
    {
        temp[index++] = arr[left++];
    }

    // Copy remaining elements from right half (if any)
    while (right <= end)
    {
        temp[index++] = arr[right++];
    }

    // Copy sorted elements back into original array
    index = 0;
    while (start <= end)
    {
        arr[start++] = temp[index++];
    }
}

// Recursive function to divide the array
void mergeSort(int arr[], int start, int end)
{
    // Base case: single element is already sorted
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Sort left half
    mergeSort(arr, start, mid);

    // Sort right half
    mergeSort(arr, mid + 1, end);

    // Merge both halves
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
    int n = 10;

    mergeSort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
