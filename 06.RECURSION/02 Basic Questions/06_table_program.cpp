#include<iostream>
using namespace std;
// table of the input number n
void printTable(int i, int n)
{
    if (i == 11)
    {
        return;
    }
    cout << n << " X " << i << " = " << n * i << endl;
    printTable(i + 1, n);
}
int main()
{
    int n;
    cin >> n;
    printTable(1, n);
}