#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int X)
{
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (arr[mid] == X)
        return true;

    else if (arr[mid] > X)
        return binarySearch(arr, start, mid - 1, X);

    else
        return binarySearch(arr, mid + 1, end, X);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int X = 5;

    if (binarySearch(arr, 0, n - 1, X))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
