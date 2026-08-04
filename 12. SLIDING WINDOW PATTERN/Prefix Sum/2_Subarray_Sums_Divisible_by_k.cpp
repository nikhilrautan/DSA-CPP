// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguous part of an array.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // Unordered map: remainder -> count of prefix sums with that remainder
        unordered_map<int, int> m;
        m[0] = 1;
        int prefixSum = 0, rem, total = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];
            rem = prefixSum % k;

            if (rem < 0) // handle negative remainder (C++ % can return negative)
                rem = k + rem;

            // if this remainder has occurred before, all those earlier
            // prefix sums form a subarray with the current one divisible by k
            total += m[rem];
            m[rem]++;
        }
        return total;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {4, 5, 0, -2, -3, 1};
    int k1 = 5;
    cout << "Test 1: " << sol.subarraysDivByK(nums1, k1) << endl; // Expected: 7

    vector<int> nums2 = {5};
    int k2 = 9;
    cout << "Test 2: " << sol.subarraysDivByK(nums2, k2) << endl; // Expected: 0

    vector<int> nums3 = {-1, 2, 9};
    int k3 = 2;
    cout << "Test 3: " << sol.subarraysDivByK(nums3, k3) << endl; // Expected: 2

    return 0;
}