#include <iostream>
using namespace std;
// Print sum of a N numbers
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int main()
{
    int n = 5;
    cout << sum(n);
}