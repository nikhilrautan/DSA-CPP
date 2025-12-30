//Maximum element of an array
#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int arr[]={2,3,11,8,7,-2};
    int n= sizeof(arr)/sizeof(arr[0]);
    int largest = INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(arr[i]>largest)
      {
        largest =arr[i];
      }
    }
    cout<<largest;
    return 0;
}