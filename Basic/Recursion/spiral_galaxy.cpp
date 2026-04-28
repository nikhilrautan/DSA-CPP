#include<bits/stdc++.h>
using namespace std;
int main()
{
   int h,w;
   cin>>h>>w;
   vector<string>s(h);
   for(int i=0;i<h;i++) cin>>s[i];
   int ans=0;
   for(int h1=0;h1<h;h1++)
   {
     for(int h2=h1;h2<h;h2++)
     {
        for(int w1=0;w1<w;w1++)
        {
            for(int w2=w1;w2<w;w2++)
            {
                int count =0;
                for(int i=h1;i<=h2;i++)
                {
                    for(int j=w1;j<=w2;j++)
                    {
                        if(s[i][j]!=s[h1+h2-i][w1+w2-j]) count++;
                    }
                }
                if(count==0) ans++;
            }
        }
     }
   }
   cout<<ans;
   return 0;
}