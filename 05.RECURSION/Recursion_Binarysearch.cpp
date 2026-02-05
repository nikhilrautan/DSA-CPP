#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int x)
{
    if(start>end)
    return 0;//false 
    int mid = start +(end-start)/2;
    if(arr[mid]==x)
    return 1;//true

    else if(arr[mid]<x)
    return binarySearch(arr,mid+1,end,x);
    else
    return binarySearch(arr,start,mid-1,x);

}
int main()
{
    int arr[]={2,4,6,8,10,12};
    int x=10;
    cout<<binarySearch(arr,0,5,x)<<endl;
}