#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;              // empty prefix
        int prefixSum = 0;
        int total = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            // if (prefixSum - k) exists in map, add its count
            if (m.count(prefixSum - k)) {
                total += m[prefixSum - k];
            }

            // always record current prefix sum (works even if key doesn't exist yet)
            m[prefixSum]++;
        }
        return total;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 1, 1};
    int k1 = 2;
    cout << "Test 1: " << sol.subarraySum(nums1, k1) << endl; // Expected: 2

    vector<int> nums2 = {1, 2, 3};
    int k2 = 3;
    cout << "Test 2: " << sol.subarraySum(nums2, k2) << endl; // Expected: 2

    vector<int> nums3 = {1, -1, 0};
    int k3 = 0;
    cout << "Test 3: " << sol.subarraySum(nums3, k3) << endl; // Expected: 3

    return 0;
}