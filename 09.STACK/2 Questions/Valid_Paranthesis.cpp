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
           // in the if part we are handling '(' so in the else part will check the ')'
          // Everything else automatically goes to else
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
// in this method we will use counter not stack
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