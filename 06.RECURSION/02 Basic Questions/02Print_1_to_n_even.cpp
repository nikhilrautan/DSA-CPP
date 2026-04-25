#include<iostream>
using namespace std;
// print from 1 to n(even no)
void printEven(int num,int N)
{
    if(num>N)
    return ;
    cout<<num<<endl;
    printEven(num+2,N);
}
int main()
{
   int n =10;
   printEven(2,n);
}