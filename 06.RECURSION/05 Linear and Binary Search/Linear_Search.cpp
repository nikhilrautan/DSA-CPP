#include <iostream>
using namespace std;

bool linearSearch(int arr[], int X, int index, int N)
{
    if (index == N)
        return false;

    if (arr[index] == X)
        return true;

    return linearSearch(arr, X, index + 1, N);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int X = 7;

    if (linearSearch(arr, X, 0, n))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
