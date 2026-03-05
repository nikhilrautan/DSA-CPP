#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    stack<char> st;

    // Push characters into stack
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }

    int i = 0;

    // Pop from stack and put back in vector
    while (!st.empty())
    {
        s[i++] = st.top();
        st.pop();
    }
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s);

    cout << "Reversed string: ";
    for (char c : s)
    {
        cout << c;
    }

    return 0;
}