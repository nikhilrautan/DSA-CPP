#include <iostream>
#include <algorithm>
using namespace std;

int maxElement(int arr[], int index, int n)
{
    if (index == n - 1)
        return arr[index];

    return max(arr[index], maxElement(arr, index + 1, n));
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int n = 5;

    cout << "Maximum element: " << maxElement(arr, 0, n);
    return 0;
}
