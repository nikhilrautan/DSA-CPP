#include <iostream>
using namespace std;

// Target Sum with repetition allowed
int subsum(int arr[], int index, int n, int sum)
{
    if (sum == 0)
        return 1;

    if (index == n || sum < 0)
        return 0;

    // Not take current element
    // Take current element (stay on same index for repetition)
    return subsum(arr, index + 1, n, sum) +
           subsum(arr, index, n, sum - arr[index]);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    int target = 4;

    cout << subsum(arr, 0, n, target);
}
