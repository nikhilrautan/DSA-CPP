 #include<iostream>
 using namespace std;
//___________________________________________________________________________________________________

//1.sum of all elements 
// int sum(int arr[], int index, int n)
// {
//     if(index==n)
//     return 0;
//     return arr[index] + sum(arr,index+1,n);
// }

// int main()
// {
//     int arr[]={3,4,5,8,2};
//     cout<<sum(arr,0,5);
// }

//____________________________________________________________________________________________________

//2. Finding minimum element
// int minelement(int arr[],int index,int n)
// {
//     if(index==n-1)
//     return arr[index];
//     return min(arr[index], minelement(arr,index+1,n));
// }
// int main()
// {
//     int arr[]={4,4,1,2,8};
//     cout<<minelement(arr,0,5);
// }