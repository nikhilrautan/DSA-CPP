#include <iostream>
using namespace std;

// Count subsets equal to given sum
int subset(int arr[], int index, int sum, int n)
{
    if (index == n)
        return sum == 0;

    return subset(arr, index + 1, sum, n) +
           subset(arr, index + 1, sum - arr[index], n);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    int target = 3;

    cout << subset(arr, 0, target, n);
}
