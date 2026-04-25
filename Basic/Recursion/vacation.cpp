  #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// memorization
int frog(int index,int task,vector<int>&a, vector<int>&b,vector<int>&c,vector<vector<int>>&dp)
{
    if(dp[task][index]!=-1) return dp[task][index];
    if(index<0) return 0;
    if(task==0) return dp[task][index]= max(happy(index-1,1,a,b,c,dp),happy(index-1,2,a,b,c,dp))+a[index];
    if(task==1) return dp[task][index]= max(happy(index-1,1,a,b,c,dp),happy(index-1,2,a,b,c,dp))+a[index];
    if(task==2) return dp[task][index]= max(happy(index-1,1,a,b,c,dp),happy(index-1,2,a,b,c,dp))+a[index];
}
int main()//tabulation
{
    int n;
    cin>>n;   
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
    vector<vector<int>>dp(3,vector<int>(n,-1));
    cout<<max({happy(n-1,0,a,b,c,dp),happy(n-2,1,a,b,c,dp),happy(n-1,2,a,b,c,dp)});
    return 0;
}