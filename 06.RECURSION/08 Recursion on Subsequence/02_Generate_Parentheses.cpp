#include <iostream>
#include <vector>
using namespace std;

// Function to generate valid parentheses combinations
void parenthesis(int n, int left, int right,
                 vector<string> &ans,
                 string &temp)
{
    // Base case: when string length becomes 2*n
    if (left + right == 2 * n)
    {
        ans.push_back(temp);
        return;
    }

    // Add '(' if we still have left parentheses remaining
    if (left < n)
    {
        temp.push_back('(');
        parenthesis(n, left + 1, right, ans, temp);
        temp.pop_back();   // Backtrack
    }

    // Add ')' only if it won't make invalid sequence
    if (right < left)
    {
        temp.push_back(')');
        parenthesis(n, left, right + 1, ans, temp);
        temp.pop_back();   // Backtrack
    }
}

int main()
{
    int n = 3;
    vector<string> ans;
    string temp = "";

    parenthesis(n, 0, 0, ans, temp);

    // Print valid parentheses combinations
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}
