//First and Last postion of element in a array

#include<iostream>
#include<vector>
using namespace std;

    int firstoccurence(vector<int>&nums,int target)
    {
        int start =0, end = nums.size(), first = -1 ,last =-1, mid;

        //for first
        while(start<= end)
        {
            mid = start + (end-start)/2;
            if(nums[mid]==target)
            {
                first = mid;
                end = mid-1;
            }
            else if(nums[mid]<target)
            start = mid+1;

            else 
            end = mid-1;
        }
         return first; 
    }
   int lastoccurence(vector<int>&nums,int target)
    {
        int start =0, end = nums.size(), first = -1 ,last =-1, mid;

        //for last
        while(start<= end)
        {
            mid = start + (end-start)/2;
            if(nums[mid]==target)
            {
                last = mid;
                start = mid+1;
            }
            else if(nums[mid]<target)
            start = mid+1;

            else 
            end = mid-1;
        }
         return last; 
    }
   
int main()
{
    vector<int>arr ={1,2,2,2,3,4,5};
    int target =2;

    int first = firstoccurence(arr,target);
    int last = lastoccurence(arr,target);

    cout<<"First Position:"<< first<<endl;
    cout<<"Last Position:"<< last<<endl;
    
    return 0;
}
