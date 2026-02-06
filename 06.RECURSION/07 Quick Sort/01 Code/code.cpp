#include <iostream>
using namespace std;

// Partition function
// It places the pivot element at its correct position
// and places smaller elements to left and larger to right
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];   // Choose last element as pivot
    int pos = start;        // Position to place smaller element

    for (int i = start; i < end; i++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[i] <= pivot)
        {
            swap(arr[pos], arr[i]);
            pos++;
        }
    }

    // Place pivot at its correct sorted position
    swap(arr[pos], arr[end]);

    return pos;   // Return pivot index
}

// Recursive Quick Sort function
void quickSort(int arr[], int start, int end)
{
    // Base case: If array has 0 or 1 element
    if (start >= end)
        return;

    // Partition the array and get pivot index
    int pivotIndex = partition(arr, start, end);

    // Recursively sort left part
    quickSort(arr, start, pivotIndex - 1);

    // Recursively sort right part
    quickSort(arr, pivotIndex + 1, end);
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9;

    quickSort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
