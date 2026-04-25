#include<iostream>
using namespace std;
// print from 1 to n
void print(int num,int N)
{
    if(num==N){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main()
{
   int N =10;
   print(1,N);
}