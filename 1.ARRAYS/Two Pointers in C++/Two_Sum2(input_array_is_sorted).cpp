#include <iostream>
#include <vector>
using namespace std;

// Approach 1: Using Binary Search
vector<int> twoSumBinarySearch(vector<int> &numbers, int target)
{
    vector<int> ans(2);
    int ans1 = -1, ans2 = -1;
    int n = numbers.size();

    for (int i = 0; i < n; i++)
    {
        int num = target - numbers[i];
        int start = i + 1, end = n - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (numbers[mid] == num)
            {
                ans1 = i;
                ans2 = mid;
                break;
            }
            else if (numbers[mid] < num)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        if (ans1 != -1) break; // found answer
    }

    ans[0] = ans1 + 1;
    ans[1] = ans2 + 1;
    return ans;
}

// Approach 2: Using Two Pointers
vector<int> twoSumTwoPointers(vector<int> &numbers, int target)
{
    int ans1 = -1, ans2 = -1;
    int start = 0, end = numbers.size() - 1;

    while (start < end)
    {
        int sum = numbers[start] + numbers[end];

        if (sum == target)
        {
            ans1 = start;
            ans2 = end;
            break;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    vector<int> ans = {ans1 + 1, ans2 + 1};
    return ans;
}

int main()
{
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans1 = twoSumBinarySearch(numbers, target);
    cout << "Binary Search Approach: " << ans1[0] << " " << ans1[1] << endl;

    vector<int> ans2 = twoSumTwoPointers(numbers, target);
    cout << "Two Pointer Approach: " << ans2[0] << " " << ans2[1] << endl;

    return 0;
}
