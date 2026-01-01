#include <iostream>
#include <vector>
using namespace std;

void segregateElements(int arr[], int n)
{
    vector<int> newArr;
    newArr.reserve(n);

    // store non-negative elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            newArr.push_back(arr[i]);
    }

    // store negative elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            newArr.push_back(arr[i]);
    }

    // copy back to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = newArr[i];
    }
}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateElements(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
