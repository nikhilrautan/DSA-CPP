#include<iostream>
#include<stack>
using namespace std;

bool checkStack(string str)
{
    stack<char>s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='()')
        s.push(str[i]);
        else
        {
            if(s.empty()) return false;
            else s.pop();
        }
    }
    return s.empty();
}
int main()
{
   string str = "(()())";

    cout << "Using Stack Method: ";
    if (checkStack(str))
        cout << "Valid\n";
    else
        cout << "Invalid\n";
 return 0;
}
