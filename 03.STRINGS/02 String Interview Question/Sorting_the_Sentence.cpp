#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Sorting the Sentence
string sortSentence(string s)
{
    vector<string> ans(10);
    string temp;
    int count = 0, index = 0;

    while (index < (int)s.size())
    {
        if (s[index] == ' ')
        {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        }
        else
        {
            temp += s[index];
        }
        index++;
    }

    // last word
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    // build result
    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }

    temp.pop_back(); // remove last space
    return temp;
}

int main()
{
    string s;
    cout << "Enter sentence: ";
    getline(cin, s);

    cout << "Sorted sentence: " << sortSentence(s) << endl;

    return 0;
}
