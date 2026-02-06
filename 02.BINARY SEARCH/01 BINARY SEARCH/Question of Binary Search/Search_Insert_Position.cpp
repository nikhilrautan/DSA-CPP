#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &arr, int key)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return start;
}

int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int key = 5;

    cout << "Insert Position: " << searchInsert(arr, key) << endl;

    return 0;
}
