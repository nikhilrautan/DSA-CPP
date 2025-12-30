#include<iostream>
#include<vector>
using namespace std;

void paranthesis(int n, int left, int right,vector<string>&ans,string &temp)
{
    if(left+ right ==2*n)
    {ans.push_back(temp);
    return;
    }
    
    //left
    if(left<n)
    {
        temp.push_back('(');
        paranthesis(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    //right
    if(left<n)
    {
        temp.push_back(')');
        paranthesis(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}
int main()
{
    vector<string>ans;
   string temp;
   cout<<paranthesis(3,0,0,ans,temp)<<endl;
   return ans;
}

