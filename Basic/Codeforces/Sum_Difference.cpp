#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_map<int, int> mp;
        long long count = 0;

        for (int i = 0; i < n; i++) {
            int val = arr[i] - i;

            // If already seen, add its frequency
            count += mp[val];

            // Increase frequency
            mp[val]++;
        }
        cout << count << endl;
    }
    return 0;
}
