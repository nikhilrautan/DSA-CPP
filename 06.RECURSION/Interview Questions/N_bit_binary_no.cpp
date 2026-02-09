#include <iostream>
#include <vector>
using namespace std;

// Generate N-bit binary numbers having more 1s than 0s at every prefix
void find(int N, vector<string> &ans,
          string &temp, int zero, int one)
{
    // Base case: if length becomes N
    if (temp.size() == N)
    {
        ans.push_back(temp);
        return;
    }

    // Always allowed to place '1'
    temp.push_back('1');
    find(N, ans, temp, zero, one + 1);
    temp.pop_back();

    // Place '0' only if ones > zeros
    if (zero < one)
    {
        temp.push_back('0');
        find(N, ans, temp, zero + 1, one);
        temp.pop_back();
    }
}

int main()
{
    int N = 3;

    vector<string> ans;
    string temp = "";

    find(N, ans, temp, 0, 0);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}
