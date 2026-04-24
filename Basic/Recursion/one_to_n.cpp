#include<iostream>
using namespace std;

void print(int num, int N)
{
    if(num==N)
    {
        cout<<num;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main()
{
     int N = 10;
    print(1, N);
}