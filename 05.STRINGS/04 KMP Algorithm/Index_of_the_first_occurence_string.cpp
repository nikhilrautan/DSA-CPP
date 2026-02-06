#include <iostream>
#include <vector>
using namespace std;

//Find the Index of the First Occurrence in a String.
void lpsFind(vector<int> &lps, string s)
{
    int pre = 0, suf = 1;

    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
                lps[suf++] = 0;
            else
                pre = lps[pre - 1];
        }
    }
}

int strStr(string haystack, string needle)
{
    if (needle.size() == 0) return 0;

    vector<int> lps(needle.size(), 0);
    lpsFind(lps, needle);

    int first = 0, second = 0;

    while (first < haystack.size())
    {
        if (haystack[first] == needle[second])
        {
            first++;
            second++;
        }

        if (second == needle.size())
        {
            return first - second;   // match found
        }
        else if (first < haystack.size() && haystack[first] != needle[second])
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }

    return -1;
}

int main()
{
    string haystack, needle;

    cout << "Enter haystack string: ";
    cin >> haystack;

    cout << "Enter needle string: ";
    cin >> needle;

    int index = strStr(haystack, needle);

    if (index != -1)
        cout << "First occurrence at index: " << index << endl;
    else
        cout << "Needle not found" << endl;

    return 0;
}
