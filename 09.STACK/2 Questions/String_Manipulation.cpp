#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// String Manipulation
int removeConsecutiveSame(vector<string> v)
{
    stack<string> s;

    for (int i = 0; i < v.size(); i++)
    {
        if (s.empty())
            s.push(v[i]);
        else if (s.top() == v[i])
            s.pop();
        else
            s.push(v[i]);
    }

    return s.size();
}

int main()
{
    vector<string> v = {"ab", "aa", "aa", "bcd", "ab"};

    int result = removeConsecutiveSame(v);

    cout << "Remaining strings count: " << result << endl;

    return 0;
}