#include<iostream>
using namespace std;
// print n to 1(reverse order)
void print(int n)
{
    if(n==2)
    {
        cout<<2;
        return;
    }
    cout<<n<<endl;
    print(n-2);
}
int main()
{    int n=10;
    print(n);
}