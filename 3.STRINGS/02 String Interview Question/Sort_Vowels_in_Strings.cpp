#include <iostream>
#include <vector>
using namespace std;

// Q1. Sort Vowels in a String
// Idea:
// 1) Find vowels and mark their places with '#'
// 2) Store count of vowels (separately for lower and upper case)
// 3) Create a sorted vowel string
// 4) Put vowels back in '#' positions

string sortVowels(string s)
{
    // frequency arrays for vowels
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    // Step 1: count vowels and mark them with '#'
    for (int i = 0; i < (int)s.size(); i++)
    {
        // lowercase vowels
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#'; // mark vowel position
        }
        // uppercase vowels
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#'; // mark vowel position
        }
    }

    // Step 2: build sorted vowels string
    // first uppercase vowels in order
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i] > 0)
        {
            ans += c;
            upper[i]--;
        }
    }

    // then lowercase vowels in order
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i] > 0)
        {
            ans += c;
            lower[i]--;
        }
    }

    // Step 3: place vowels back into marked positions
    int first = 0, second = 0;

    while (second < (int)ans.size())
    {
        if (s[first] == '#')
        {
            s[first] = ans[second];
            second++;
        }
        first++;
    }

    return s;
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "After sorting vowels: " << sortVowels(s) << endl;

    return 0;
}
