#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(auto &i:a) cin>>i;
    vector<int>prefix(n+1);
    for(int i=1;i<=n;i++) prefix[i]=prefix[i-1]^a[i-1];
    while(q--)
    {   int l,r;
        cin>>l,r;
        cout<<(prefix[r]^prefix[l-1])<<"\n";
    }
    return 0;
}