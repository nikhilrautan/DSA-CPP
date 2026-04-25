#include<iostream>
using namespace std;
int sqSum(int n)
{
    if (n == 1)
        return 1;
    return n * n + sqSum(n - 1);
}
int main()
{   // Print sum of square of N numbers
    int n = 5;
    cout << sqSum(n);

}