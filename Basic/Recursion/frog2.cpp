#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int frog(int index,int k,vector<int>&a, vector<int>&dp)
{
    if(dp[index]!=-1) return dp[index]; 

    if(index==0) return dp[index]=0;
    if(index==1) return dp[index]= abs(a[1]-a[0]);

    int mini = INT_MAX;

    for(int i=index-1;i>=max(0,index-k);i--)
    {
        mini = min(mini, frog(i,k,a,dp) + abs(a[index]-a[i]));
    }

    return dp[index]= mini;
}

int main()
{
    int n, k;
    cin >> n >> k;   

    vector<int>a(n);
    for(auto &i:a) cin >> i;

    vector<int>dp(n,-1);

    cout << frog(n-1,k,a,dp);

    return 0;
}