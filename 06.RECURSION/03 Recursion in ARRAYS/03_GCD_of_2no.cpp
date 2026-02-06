#include <iostream>
using namespace std;

int gcd(int A, int B)
{
    if (B == 0)
        return A;
    return gcd(B, A % B);
}

int main()
{
    int A, B;
    cout << "Enter two numbers: ";
    cin >> A >> B;

    cout << "GCD is: " << gcd(A, B);
    return 0;
}
