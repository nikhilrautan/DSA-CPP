#include <iostream>
using namespace std;

int pow(int num, int n)
{
    if (n == 1)
        return num;
    return num * pow(num, n - 1);
}


int main()
{
    // Print Power
    int n = 5;
    cout << pow(n, 5);

}