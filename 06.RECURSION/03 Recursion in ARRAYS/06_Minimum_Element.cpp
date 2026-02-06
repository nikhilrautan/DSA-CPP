#include <iostream>
#include <algorithm>
using namespace std;

int minElement(int arr[], int index, int n)
{
    if (index == n - 1)
        return arr[index];

    return min(arr[index], minElement(arr, index + 1, n));
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    int n = 5;

    cout << "Minimum element is: " << minElement(arr, 0, n);
    return 0;
}
