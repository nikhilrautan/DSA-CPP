#include<iostream>
using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;

    long long pre_sum[n+1] = {0}; 

    for(int i=1;i<=n;i++)
    {
        long long inp;
        cin>>inp;
        pre_sum[i]= pre_sum[i-1] + inp;
    }

    while(q--)
    {
        long long a, b;
        cin>>a>>b;
        cout<<pre_sum[b] - pre_sum[a-1]<<"\n";
    }
    return 0;
}