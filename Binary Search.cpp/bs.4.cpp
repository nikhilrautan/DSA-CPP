//Search in Rotated Sorted Array
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&nums,int target)
{
    int start=0, end = nums.size()-1,mid , ans = nums.size();
    while(start<=end)
    {
        mid = start + (end-start)/2;
        //found the element
        if(nums[mid]==target)
        {
            return mid;
        }
        // left side sorted
        else if(nums[mid]>= nums[start])
        {
            if(nums[start]<=target && nums[mid]>=target)
            end = mid-1;
            else
            start = mid+1;
        }
        // right side sorted
            else{
                if(nums[mid]<=target && nums[end]>= target)
                start =mid +1;
                else
                end = mid-1;
            }
        }
        return -1;
    }

int main()
{
    vector<int>nums={5,1,3};
    int target =3;
    cout<<search(nums,target);
    return 0;
}