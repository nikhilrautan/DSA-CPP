#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    // Print Factorial of a number
    int n = 5;
    cout << fact(n);

}