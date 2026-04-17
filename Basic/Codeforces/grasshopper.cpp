#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
       if(n%k) cout<<1<<"\n"<<n<<"\n";
       else cout<<2<<"\n"<<n-1<<" "<<1<<"\n";
    }
    return 0;
}