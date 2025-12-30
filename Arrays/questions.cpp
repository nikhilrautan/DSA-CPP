#include<iostream>
using namespace std;
#include<vector>
//1. Maximum element of an array
// int main()
// {
//     int arr[]={2,3,11,8,7,-2};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int largest = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//       if(arr[i]>largest)
//       {
//         largest =arr[i];
//       }
//     }
//     cout<<largest;
//     return 0;
// }

 //___________________________________________________________________________________________________

 //2. Reverse an array
// int main()
// {
//     int arr[6]={1,2,3,4,5,6};
//     int start = 0 , end =5;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end --;
//     };
//     for(int i=0;i<6;i++)
//     {
//        cout<<arr[i]<<" ";
//     }
// }

//___________________________________________________________________________________________________
 
//   class solution{
//     public:
//         int main()
//   { int n= arr.size();
//     int arr[5]={2,3,7,11,4};
//     rotate(arr);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//   }
//     void rotate(vector<int>&arr){
//         int n= arr.size();
//         int last =arr[n-1];
//         for(int i=n-2;i>=0;i++)
//         arr[i+1] = arr[i];
//         arr[0]=last;
//     } 
// };

 //_____________________________________________________________________________________________________
  
 //4. Passing array to function
//   void fun(int a[], int n)
//   {
//     cout<<sizeof(a)<<endl;
//     for(int i=0;i<n;i++)
//     cout<<a[i]<<" ";
//   }
//   int main()
//   {
//     int arr[5]={3,2,1,6,7};
//     cout<<sizeof(arr)<<endl;
//     fun(arr,5);
//   }


// ______________________________________________________________________________________________________
  
// Duplicates in the array
  int main()
  {
    int arr[]={1,2,3,4,2,8,7,1,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Duplicate elements are :";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
  }