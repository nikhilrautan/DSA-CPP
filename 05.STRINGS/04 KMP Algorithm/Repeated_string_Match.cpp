#include <iostream>
#include <vector>
#include <string>
using namespace std;

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
            {
                lps[suf] = 0;
                suf++;
            }
            else
            {
                pre = lps[pre - 1];
            }
        }
    }
}

int KMP_Match(string haystack, string needle)
{
    vector<int> lps(needle.size(), 0);
    lpsFind(lps, needle);

    int i = 0, j = 0;

    while (i < haystack.size())
    {
        if (haystack[i] == needle[j])
        {
            i++;
            j++;
        }

        if (j == needle.size())
            return 1;
        else if (i < haystack.size() && haystack[i] != needle[j])
        {
            if (j == 0)
                i++;
            else
                j = lps[j - 1];
        }
    }
    return 0;
}

int repeatedStringMatch(string a, string b)
{
    if (a.empty()) return -1;
    if (a == b) return 1;

    int repeat = 1;
    string temp = a;

    while (temp.size() < b.size())
    {
        temp += a;
        repeat++;
    }

    if (KMP_Match(temp, b))
        return repeat;

    if (KMP_Match(temp + a, b))
        return repeat + 1;

    return -1;
}

int main()
{
    string a = "abcd";
    string b = "cdabcdab";

    cout << repeatedStringMatch(a, b);
    return 0;
}
