#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Longest Substring Without Repeating Characters
// Sliding Window technique
// first = start of window
// second = end of window
int lengthOfLongestSubstring(string s)
{
    vector<bool> visited(256, false); // stores if character is in current window
    int first = 0, second = 0;
    int len = 0;

    while (second < (int)s.size())
    {
        // if character already present, shrink window from left
        while (visited[s[second]])
        {
            visited[s[first]] = false;
            first++;
        }

        // add current character
        visited[s[second]] = true;

        // update max length
        len = max(len, second - first + 1);

        second++;
    }

    return len;
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Longest substring length: " << lengthOfLongestSubstring(s) << endl;

    return 0;
}
