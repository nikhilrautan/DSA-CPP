#include<iostream>
using namespace std;
// print n to 1(reverse order)
void print(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
int main()
{
    int n=10;
    print(n);
}