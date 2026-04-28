#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   for(auto &i:a) cin>>i;
    map<int,int>mp;
    for(auto &i:a) mp[i]++;
    vector<int>contri;
    for(auto &i:mp) contri.push_back(i.first*i.second);
    sort(contri.rbegin(),contri.rend());
    int ans=0;
    for(int i=1;i<contri.size();i++) ans+=contri[i];
    cout<<ans;
    return 0;
}