#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // no of test cases
    cin >> t;
    while (t--) {
        int n, q; // n is length of array 
        // q is no of queries
        cin >> n >> q;

        vector<long long> pre(n+1, 0);// array for prefix sum 

        for (int i = 1; i <= n; i++) {
            int temp; // of access elements of an array
            cin >> temp;
            pre[i] = pre[i-1] + temp; 
        }

        long long total = pre[n]; // sum of the original array
        
        while (q--) {
            int l, r; 
            long long k;
            cin >> l >> r >> k;

            long long old = pre[r] - pre[l-1];
            long long len = r - l + 1;

            long long new_sum = total - old + len * k;

            if (new_sum % 2) cout << "YES\n"; 
            else cout << "NO\n";
        }
    }
}