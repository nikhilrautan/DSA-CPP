#include<iostream>
using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

         // Case 1: If n is NOT divisible by k
         // Then we can jump directly to n in one move
        if(n % k != 0) 
        {
            cout << 1 << "\n";   // number of jumps
            cout << n << "\n";   // jump length
        }
        else 
        {
            // Case 2: If n is divisible by k
            // We cannot jump directly (invalid move)
            // So split into two valid jumps:
            // (n-1) and 1 → both are NOT divisible by k
            cout << 2 << "\n";          // number of jumps
            cout << n-1 << " " << 1 << "\n";  // jump lengths
        }
    }

    return 0;
}