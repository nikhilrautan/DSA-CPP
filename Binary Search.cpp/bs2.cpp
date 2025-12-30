// Search Insert Position
#include <iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>&nums ,int target)
{
    int start=0 , end = nums.size()-1 ,ans;
    while(start<=end)
    {
       int mid = start + (end-start)/2;
       if(nums[mid]==target)
       {
        ans = mid;
        break;
       }
       else if(nums[mid]<target)
       {
        start =mid+1;
       }
       else
       end = mid-1;
   }
   return start;
}

int main()
{
    vector<int>nums = {1,3,5,6};
    int target = 5;
    cout<<"Insert Position: "<< searchInsert(nums, target);
    return 0;
}