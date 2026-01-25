#include <iostream>
#include <vector>
using namespace std;

// Q3. Search in Rotated Sorted Array.
int search(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= target && arr[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && arr[end] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = search(arr, target);

    cout << "Target found at index: " << index << endl;

    return 0;
}
