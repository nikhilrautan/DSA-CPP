#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Smallest window containing 0, 1 and 2
// Sliding window technique
int smallestSubstring(string S)
{
    int n = S.size();
    int ans = n + 1;

    int i = 0, j = 0;
    int count[3] = {0, 0, 0}; // count of '0', '1', '2'

    while (i < n)
    {
        // expand window
        count[S[i] - '0']++;
        i++;

        // shrink from left if there are extra duplicates at start
        while (j < i && count[S[j] - '0'] > 1)
        {
            count[S[j] - '0']--;
            j++;
        }

        // check if window has all 0,1,2
        if (count[0] > 0 && count[1] > 0 && count[2] > 0)
        {
            ans = min(ans, i - j);
        }
    }

    if (ans == n + 1) return -1;
    return ans;
}

int main()
{
    string S;
    cout << "Enter string (only 0,1,2): ";
    cin >> S;

    cout << "Smallest window length: " << smallestSubstring(S) << endl;

    return 0;
}
