#include <iostream>
#include <stack>
using namespace std;

// Q6. Minimum Add to Make Parentheses Valid
int minAddToMakeValid(string s)
{
    stack<char> st;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty())
                count++;     // need one '('
            else
                st.pop();    // match found
        }
    }

    return count + st.size();
}

int main()
{
    string s = "()))((";

    int result = minAddToMakeValid(s);

    cout << "Minimum parentheses to add: " << result << endl;

    return 0;
}