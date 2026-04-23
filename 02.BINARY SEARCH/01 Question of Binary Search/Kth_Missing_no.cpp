#include <iostream>
#include <vector>
using namespace std;

// Q4. Kth Missing Positive Number
int findKthPositive(vector<int> &arr, int k)
{
    int start = 0, end = arr.size() - 1;
    int ans = arr.size();

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Missing numbers till index mid
        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans + k;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    cout << "Kth Missing Positive Number: "
         << findKthPositive(arr, k) << endl;

    return 0;
}
