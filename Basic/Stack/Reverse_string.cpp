#include<iostream>
#include<vector>
#include<stack>
using namespace std;

  void reverseString(vector<char>&s)
  {
     stack<char>st;
     for(int i=0;i<s.size();i++)
     {
        st.push(s[i]);
     }
     int i=0;
     while(!st.empty())
     {
        s[i]=st.top();
        i++;
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