#include <iostream>
#include <vector>
using namespace std;

// Check if there exists a subset whose sum is divisible by m
int find(vector<int> arr, int index, int n, int sum, int m)
{
    if (index == n)
        return (sum != 0 && sum % m == 0);

    return find(arr, index + 1, n, sum, m) ||
           find(arr, index + 1, n, sum + arr[index], m);
}

int main()
{
    vector<int> arr = {3, 1, 7, 5};
    int n = arr.size();
    int m = 6;

    if (find(arr, 0, n, 0, m))
        cout << "Yes";
    else
        cout << "No";
}
