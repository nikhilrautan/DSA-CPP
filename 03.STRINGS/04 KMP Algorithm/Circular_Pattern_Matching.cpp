#include <vector>
#include <string>
using namespace std;

// LPS creation
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

// KMP matching
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

// Circular Pattern Matching
int circularPatternMatching(string a, string b)
{
    if (a.size() != b.size())
        return 0;

    if (a.empty())
        return 1;

    string temp = a + a;
    return KMP_Match(temp, b);
}
