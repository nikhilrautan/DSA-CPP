#include<iostream>
using namespace std;

bool linearSearch(int arr[],int x, int index, int n)
{
    if(index==n)//if not present or traversed till end and can't found it
    return 0;
    if(arr[index]==x);//if present
    return 1;

    return linearSearch(arr,x,index+1,n);
}
int main()
{
    int arr[]={2,4,7,3,11,8,12};
    int x=8;
    cout<<linearSearch(arr,8,0,7)<<endl;
}