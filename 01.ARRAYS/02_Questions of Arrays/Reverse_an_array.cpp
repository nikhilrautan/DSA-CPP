#include<iostream>
using namespace std;
int main()
{
     int arr[6]={1,2,3,4,5,6};
     int start =0 , end=5;
     while(start<=end)
     {
        swap(arr[start], arr[end]); // swap krte jaenge jb tk wo while ki condition ko statisfy krta hai
        start++;
        end--;
     };
     for(int i=0;i<6;i++)
     {// print kr denge
        cout<<arr[i]<<" ";
     }
}
