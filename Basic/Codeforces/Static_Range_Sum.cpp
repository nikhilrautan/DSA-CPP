#include<iostream>
using namespace std;

/*
Problem: Range Sum Queries (Prefix Sum)

You are given:
- An integer n → size of the array
- An integer q → number of queries

Then:
- You are given n integers (array elements)

Each of the next q lines contains two integers a and b,
representing a query:
→ Find the sum of elements from index a to b (1-based indexing)

Goal:
Answer each query efficiently.

------------------------------------------------------------

Concept Used: Prefix Sum

Instead of calculating sum for every query (which is slow),
we preprocess the array using prefix sum.


Prefix sum array:
pre_sum[i] = sum of first i elements

Formula:
Sum from index a to b = pre_sum[b] - pre_sum[a-1]

Time Complexity:
- Preprocessing: O(n)
- Each query: O(1)
*/

int main()
{
    long long n, q;
    cin >> n >> q;   // n = number of elements, q = number of queries

    // prefix sum array (1-based indexing)
    long long pre_sum[n + 1] = {0};

    // building prefix sum array
    for(int i = 1; i <= n; i++)
    {
        long long inp;
        cin >> inp;   // input element

        // current prefix sum = previous + current element
        pre_sum[i] = pre_sum[i - 1] + inp;
    }

    // processing queries
    while(q--)
    {
        long long a, b;
        cin >> a >> b;   // query range [a, b]

        // sum from index a to b using prefix sum formula
        cout << pre_sum[b] - pre_sum[a - 1] << "\n";
    }

    return 0;
}