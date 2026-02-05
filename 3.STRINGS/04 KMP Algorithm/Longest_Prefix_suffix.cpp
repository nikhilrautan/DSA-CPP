#include <iostream>
#include <vector>
using namespace std;

// Longest Prefix Suffix
int lps(string s)
{
    vector<int> lpsArr(s.size(), 0);

    int pre = 0, suf = 1;

    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lpsArr[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
            {
                lpsArr[suf] = 0;
                suf++;
            }
            else
            {
                pre = lpsArr[pre - 1];
            }
        }
    }

    return lpsArr[s.size() - 1];
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    cout << "Longest Prefix Suffix length: " << lps(s) << endl;

    return 0;
}
