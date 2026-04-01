#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    stack<char> st;

    // Push characters into stack
    for (int i = 0; i < s.size(); i++)//stack m push krenge saare elements array k.
    {
        st.push(s[i]);
    }

    int i = 0;

    // Pop from stack and put back in vector
    while (!st.empty())//ab jo stack top m hai usko array m daalte jaenge to hume (Reversed Array) mil jaega.
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
        cout << c; // Reverse string return kr denge
    }

    return 0;
}