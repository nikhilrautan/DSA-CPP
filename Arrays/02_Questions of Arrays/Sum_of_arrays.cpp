#include<iostream>
#include <climits>
using namespace std;

int main(){
   int arr[5]={56,91,32,339,431};
   int sum=0;
   for (int i = 0; i < 5; i++)
   {
    sum=sum+arr[i];
   }
   cout<<sum;
   return 0;
}