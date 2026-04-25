#include <iostream>
using namespace std;
// Sum of cubes of N natural numbers using Recursion.
int cubeSum(int n)
{
    if (n == 1)
        return 1;
    return n * n * n + cubeSum(n - 1);
}

int main()
{
    int n = 5;
    cout << cubeSum(n);
}