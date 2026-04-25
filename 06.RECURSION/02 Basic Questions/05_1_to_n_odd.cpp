#include <iostream>
using namespace std;
// Q5.Print all odd numbers from 1 to n using recursion.
void printOdd(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    printOdd(n - 2);
    cout << n << endl;
}
int main()
{
    int n = 11;
    if (n % 2 == 0)
        n--;
    printOdd(n);
}