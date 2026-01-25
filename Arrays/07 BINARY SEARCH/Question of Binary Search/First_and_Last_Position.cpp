#include <iostream>
#include <vector>
using namespace std;

// Q1. Find First and Last Position of Element in Sorted Array.
vector<int> searchRange(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int first = -1, last = -1;

    // Find First Occurrence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    // Find Last Occurrence
    start = 0;
    end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return {first, last};
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = searchRange(arr, target);

    cout << "First Position: " << result[0] << endl;
    cout << "Last Position: " << result[1] << endl;

    return 0;
}
