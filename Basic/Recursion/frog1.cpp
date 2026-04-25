#include<iostream>
#include<vector>
using namespace std;
int frog(int index,vector<int>&a, vector<int>&dp)
{   if(dp[index]!=-1) return dp[index]; 
    if(index==0) dp[index]=0;
    if(index==1) return dp[index]= abs(a[0]-a[1]);

    int cost1 = frog(index-1,a) +abs(a[index] -a[index-1]);
    int cost2 = frog(index-2,a) +abs(a[index] -a[index-2]);

    return dp[index]= min(cost1,cost2);
}
int mian()
{    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a) cin>>i;
    vector<int>dp(n,-1);
    cout<<frog(n-1,a,dp);
    return 0;
}