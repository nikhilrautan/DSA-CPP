#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Q8. Print Bracket Number
vector<int> bracketNumbers(string S)
{
    vector<int> ans;
    int count = 0;
    stack<int> st;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '(')
        {
            count++;
            st.push(count);
            ans.push_back(count);
        }
        else if (S[i] == ')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }

    return ans;
}

int main()
{
    string S = "(aa(bdc))p(dee)";
    
    vector<int> result = bracketNumbers(S);

    cout << "Bracket Numbers: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}