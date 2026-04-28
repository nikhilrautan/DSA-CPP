#include <iostream>
using namespace std;

// Function to check if subset with given target exists
bool findTarget(int arr[], int index, int n, int target)
{
    // If target becomes 0, we found a valid subset
    if (target == 0)
        return true;
    // If we reach end or target becomes negative
    if (index == n || target < 0)
        return false;
    // Either skip current element
    // OR include current element
    return findTarget(arr, index + 1, n, target) ||
           findTarget(arr, index + 1, n, target - arr[index]);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int target = 6;
    if (findTarget(arr, 0, n, target))
        cout << "Subset exists";
    else
        cout << "Subset does not exist";
}
