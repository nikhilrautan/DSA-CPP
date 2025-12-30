#include <iostream>
using namespace std;

// 1. Check palindrome
//  bool checkpal(string str, int start ,int end)
//  {
//      if(start>=end)
//      return 1;
//      return checkpal(str,start+1,end-1);
//  }
//  int main()
//  {
//      string str = "naman";
//      cout<<checkpal(str,0,4)<<endl;
//  }

//____________________________________________________________________________________________________________________________
// 2. COunt vowels

// int count(string str, int index)
// {
//     if (index == -1)
//         return 0;
//     if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
//     {
//         return 1 + count(str, index - 1);
//     }
//     else
//         count(str, index - 1);
// }
// int main()
// {
//     string str = "rohit";
//     cout << count(str, 4) << endl;
// }

//_____________________________________________________________________________________________________________________________
//3. Reverse a string
// void rev(string&str,int start, int end)
// {
//     if(start>=end)
//     return;
//     char c= str[start];
//     str[start]= str[end];
//     str[end]=c;
//     rev(str,start+1,end-1);
// }

// int main()
// {
//     string str ="rohit";
//     rev(str,0,4);
//     cout<<str;
// }

//________________________________________________________________________________________________________________________________

//4. Lower case to upper
// void lowertoupper(string &str,int index)
// {
//     if(index==-1)
//     return ;

//     str[index] = 'A'+str[index]-'a';
//     lowertoupper(str,index-1);
// }
// int main()
// {
//     string str = "rohit";
//     lowertoupper(str,4);
//     cout<<str;
// }