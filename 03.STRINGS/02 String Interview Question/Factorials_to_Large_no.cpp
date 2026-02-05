#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Factorials of large numbers
// We store digits of factorial in a vector (like big integer).
vector<int> factorial(int N)
{
    vector<int> ans(1, 1); // start with 1

    while (N > 1)
    {
        int carry = 0;

        // multiply current number with N
        for (int i = 0; i < (int)ans.size(); i++)
        {
            int res = ans[i] * N + carry;
            ans[i] = res % 10;
            carry = res / 10;
        }

        // add remaining carry digits
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }

        N--;
    }

    // digits are stored in reverse order, so reverse them
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int N;
    cout << "Enter number: ";
    cin >> N;

    vector<int> result = factorial(N);

    cout << "Factorial of " << N << " is: ";
    for (int digit : result)
        cout << digit;
    cout << endl;

    return 0;
}
