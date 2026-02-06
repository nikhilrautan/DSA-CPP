#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Longest K unique characters substring
// Sliding Window approach
int longestKSubstr(string s, int k)
{
    int n = s.size();
    int i = 0, j = 0;       // window pointers
    int distinct = 0;       // number of unique chars in window
    int ans = -1;

    vector<int> mp(26, 0);  // frequency array for 'a' to 'z'

    while (j < n)
    {
        // include s[j]
        if (mp[s[j] - 'a'] == 0)
            distinct++;

        mp[s[j] - 'a']++;
        j++;

        // shrink window if distinct > k
        while (distinct > k)
        {
            mp[s[i] - 'a']--;
            if (mp[s[i] - 'a'] == 0)
                distinct--;
            i++;
        }

        // update answer when distinct == k
        if (distinct == k)
            ans = max(ans, j - i);
    }

    return ans;
}

int main()
{
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;

    cout << "Longest substring length with exactly " << k
         << " unique characters: " << longestKSubstr(s, k) << endl;

    return 0;
}
