#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {7, 8, 8, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> freq;

    // Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print result
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}
