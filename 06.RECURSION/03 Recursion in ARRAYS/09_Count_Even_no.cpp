#include <iostream>
using namespace std;

int evenNum(int arr[], int index, int n, int count)
{
    if (index == n)
        return count;

    if (arr[index] % 2 == 0)
        return evenNum(arr, index + 1, n, count + 1);
    else
        return evenNum(arr, index + 1, n, count);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int n = 5;

    cout << "Even count: " << evenNum(arr, 0, n, 0);
    return 0;
}
