#include <iostream>
using namespace std;

// Function to print all possible subset sums
void printSubsetSum(int arr[], int index, int n, int sum)
{
    // Base case: when all elements are processed
    if (index == n)
    {
        cout << sum << endl;   // Print current subset sum
        return;
    }

    // Exclude current element
    printSubsetSum(arr, index + 1, n, sum);

    // Include current element
    printSubsetSum(arr, index + 1, n, sum + arr[index]);
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    printSubsetSum(arr, 0, n, 0);
}
