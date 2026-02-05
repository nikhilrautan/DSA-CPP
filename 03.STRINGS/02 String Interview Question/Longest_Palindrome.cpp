#include <iostream>
#include <vector>
using namespace std;

// Q1. Longest Palindrome
int longestPalindrome(string s)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower[s[i] - 'a']++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            upper[s[i] - 'A']++;
    }

    int count = 0;
    bool odd = false;

    for (int i = 0; i < 26; i++)
    {
        if (lower[i] % 2 == 0)
            count += lower[i];
        else
        {
            count += lower[i] - 1;
            odd = true;
        }

        if (upper[i] % 2 == 0)
            count += upper[i];
        else
        {
            count += upper[i] - 1;
            odd = true;
        }
    }

    return count + odd;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Longest Palindrome Length: " << longestPalindrome(s) << endl;

    return 0;
}
