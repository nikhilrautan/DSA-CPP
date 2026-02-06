#include <iostream>
#include <vector>
using namespace std;

// Q4. Sort a String
string sortString(string s)
{
    vector<int> alpha(26, 0);

    // Count frequency
    for (int i = 0; i < s.size(); i++)
    {
        alpha[s[i] - 'a']++;
    }

    // Build sorted answer
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (alpha[i] > 0)
        {
            ans += c;
            alpha[i]--;
        }
    }
    return ans;
}

int main()
{
    string s;
    cout << "Enter string (lowercase only): ";
    cin >> s;

    cout << "Sorted string: " << sortString(s) << endl;

    return 0;
}
