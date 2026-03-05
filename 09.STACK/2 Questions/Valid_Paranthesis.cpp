#include <iostream>
#include <stack>
using namespace std;

// Valid Parenthesis
// Method 1: Using Stack
bool checkStack(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else
        {
            if (s.empty())
                return false;
            else
                s.pop();
        }
    }

    return s.empty();
}

// Method 2: Using Counter (Optimal)
bool checkCount(string str)
{
    int left = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            left++;
        }
        else
        {
            if (left == 0)
                return false;
            else
                left--;
        }
    }

    return left == 0;
}

int main()
{
    string str = "(()())";

    cout << "Using Stack Method: ";
    if (checkStack(str))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    cout << "Using Counter Method: ";
    if (checkCount(str))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}