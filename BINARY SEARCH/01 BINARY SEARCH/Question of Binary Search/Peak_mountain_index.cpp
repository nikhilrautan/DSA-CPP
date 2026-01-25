#include <iostream>
#include <vector>
using namespace std;

// Q1. Peak Index in a Mountain Array.
int findKthPositive(vector<int> &arr, int k)
{
    int start = 1, end = arr.size() - 2, mid;
    
    while (start <= end)
    {
        // mid = start + (end - start) / 2;
        mid = end + (start - end) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {0, 2, 5, 7, 6, 3, 1};
    int k = 0; // not used, but function needs it

    int peakIndex = findKthPositive(arr, k);

    cout << "Peak Index: " << peakIndex << endl;
    if (peakIndex != -1)
        cout << "Peak Element: " << arr[peakIndex] << endl;

    return 0;
}
