#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q3. Pair With Given Difference
int solve(vector<int> &A, int B)
{
    int n = A.size();
    sort(A.begin(), A.end());

    int start = 0, end = 1;

    if (B < 0)
        B = B * -1;

    while (end < n)
    {
        if (A[end] - A[start] == B)
        {
            return 1;
        }
        else if (A[end] - A[start] < B)
        {
            end++;
        }
        else
        {
            start++;
        }

        if (start == end)
            end++;
    }

    return 0;
}

int main()
{
    vector<int> A = {5, 10, 3, 2, 50, 80};
    int B = 78;

    if (solve(A, B))
        cout << "Yes, pair exists" << endl;
    else
        cout << "No, pair does not exist" << endl;

    return 0;
}
