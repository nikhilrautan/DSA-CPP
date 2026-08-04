//We are given an array arr[] of integers. Find the total count of subarrays with their sum equal to 0.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int findSubarray(vector<int> &arr) {
        long long int total = 0; // number of subarrays with sum zero

        // map: prefixSum -> count of times it occurred
        unordered_map<long long int, long long int> m;
        long long int prefixsum = 0;
        m[0] = 1;

        for (int i = 0; i < arr.size(); i++) {
            prefixsum += arr[i];

            // if this prefix sum occurred before, those earlier points
            // each form a zero-sum subarray with the current index
            total += m[prefixsum];
            m[prefixsum]++;
        }
        return total;
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {0, 0, 5, 5, 0, 0};
    cout << "Test 1: " << sol.findSubarray(arr1) << endl; // Expected: 6

    vector<int> arr2 = {6, -1, -3, 4, 3, 2, 1};
    cout << "Test 2: " << sol.findSubarray(arr2) << endl; // Expected: 1

    vector<int> arr3 = {1, 2, 3};
    cout << "Test 3: " << sol.findSubarray(arr3) << endl; // Expected: 0

    return 0;
}