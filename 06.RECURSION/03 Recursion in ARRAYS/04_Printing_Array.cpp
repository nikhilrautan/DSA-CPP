#include <iostream>
using namespace std;
//forward Printing
void print(int arr[], int index, int n)
{
    if (index == n)
        return;

    cout << arr[index] << " ";
    print(arr, index + 1, n);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    int n = 5;

    print(arr, 0, n);
    return 0;
}

// reverse Printing
void print2(int arr[], int index)
{
    if (index == -1)
        return;

    cout << arr[index] << " ";
    print2(arr, index - 1);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7};
    int n = 5;

    print2(arr, n - 1);
    return 0;
}