#include <iostream>
#include <cmath>
using namespace std;

// int add(int a , int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }

// [BASIC CODES (CONCEPTS)]
// cout<<"hello world"<<endl;
// cout<<"next line";
// int a,b,c;
// short sa=9;
// cout<<sa;
// int a ;
// int b;
// cout<<"enter first number :"<<endl;
// cin>>a;
// cout<<"enter second number :"<<endl;
// cin>>b;
// cout<<" a+b:"<<a +b<<endl;
// cout<<" a-b:"<<a -b<<endl;
// cout<<" a*b:"<<a *b<<endl;
// cout<<" a/b:"<<(float)a /b<<endl;



// [ SWITCH CASE STATEMENT]
// int main(){
// switch (age)
// {
// case 12:
//     cout<<"you are 12 years old "<<endl;
//     break;
//     case 18:
//     cout<<"you are 18 years old "<<endl;
//     break;
// default:
// cout<<"neither you are 12 years old nor 18 year old"<<endl;
//     break;
// }
//}

// while loop
//  int index = 0;
//  while (index <34)
//  {
//      cout<<"we are at index no.:  "<<index<<endl;
//      index = index + 1 ;
//  }
//  do {
//      cout<<"we are at index no.:  "<<index<<endl;
//         index = index + 1 ;
// }

// for (int  i = 0; i <34 ; i++)
// {
//     cout<<"the value of i is :"<<i<<endl;
// }

// int a , b ,c ;
// cout<<"enter first number :"<<endl;
// cin>>a;
// cout<<"enter second number :"<<endl;
// cin>>b;
// cout<<"value of c is :"<< add(a,b) <<endl;
// int arr[] = {7,2,3};
// //cout<<arr[1];
// int marks [6];
// for (int  i = 0; i < 6 ; i++)
// {
//     cout<<"enter the marks of "<<i<<endl;
//     cin>>marks[i];
// }
// for (int  i = 0; i < 6 ; i++)
// {
//     cout<<"Marks "<< i <<"th student is : " <<marks[i]<<endl;
// }

// [FOR LOOPS ADVANCED (PRINT A TO Z ALPHABETS )]
// int main(){
// char name ;
// for (name = 'a' ; name <= 'z'; name =name +1 )
// {
//    cout<<name <<endl;
// }
//}

// [NUMBERS IN REVERSE ORDER]
// int main(){
// int n ,i;
// cout<<"enter the number :";
// cin>>n;
// for ( i = n; i >=1; i =i-1)
// {
//     cout<<i<<" ";
// }
//}

// [MULTIPLICATION TABLE]
// int main(){
// int i ,n ;
// cout<<"enter the number :" <<endl;
// cin >>n;
// for (int i = 1; i < 11; i++)
// {
//    cout<<n*i <<endl;
//}
// }

// [VALUE OF A NUMBER IN POWER ]
// int main(){
// int n , i,num, pow;
// cout<<"enter the number :";
// cin >>n;
// cout<<"enter the power :";
// cin>>pow;
// num = n;
// for ( i = 1; i < pow;i = i+1)
// {
//     num = num*n;
// }
// cout<<num;
//}

// [PRIME NUMBER ]
// int main(){
//  int i ,n;
//  cout<<"enter the number :";
//  cin>>n;
//  if (n<2)
//  {
//      cout<<"not a prime number ";
//      return 0;
// }
//   for ( i = 2; i < n; i++)
//     {
//         if(n%i==0)
//         {
//         cout<<"not a prime number ";
//         return 0;
//         }
//     }
//     cout<<"prime number ";
//     return 0;
//     else {
// }
//}

// [NESTED LOOP STAR PATTERN]
// int main(){
// int i ,j ;
// for ( j = 1; j < 5; j++)
// {
//    for ( i = 1; i < 5; i++)
//    {
//    cout<<"*"<<" ";
//    }
//    cout<<endl;
// }
// }

// [PRINTING * PATTERN]
// int main(){
// int row, col;
// for (row = 1; row <= 5;row =  row + 1)
// {
//     for (col = 1; col <= 5; col =col + 1)
//     {
//         cout << "*" << " ";
//     }
//     cout << endl;
// }
// }

// [PRINTING  a 5 TIMES and so to b,c,d,e (in a row)]
// int main(){
//  int row, col;
//  for (row = 1; row <= 5;row =  row + 1)
//  {
//     char name = 'a' + row -1;
//     for (col = 1; col<=5; col= col+1)
//     {
//      cout<<name<<" ";
//     }
//     cout<<endl;
//}

// [PRINTING 5 numbers in ascending order in different rows]
// int main()
//{
// int row, col;
// int count = 1;
// for (row = 1; row <= 5; row = row + 1)
// {
//     for (col = 1; col <= 5; col = col + 1)
//     {
//         cout << count << " ";
//         count = count + 1;
//     }
//     cout << endl;
// }
//}

// 1.[PRINTING RINGHT HANDED TRIANGLE ]
//  int main(){
//  int row, col;
//  for ( row = 1; row <= 4; row = row +1)
//  {
//     for (col = 1; col <=row; col = col +1)
//     {
//      cout<<"*"<<" ";
//     }
//     cout<<endl;
//  }
// }

// 2.[PRINTING  INVERTED RIGHT HANDED TRIANGLE ]
//  int main(){
//  int row, col;
//  for ( row = 5; row >= 1; row = row -1)
//  {
//     for (col = 1; col <=row; col = col +1)
//     {
//      cout<<"*"<<" ";
//     }
//     cout<<endl;
//  }
// }

// 3.[TRIANGLE STAR PATTERN(pyramid)]
//   int main(){
//      int row,col;
//      int n;
//      cout<<"Enter the input :";
//      cin>>n;
//      for (row=1; row<=n;row=row +1)
//      {
//          for(col= 1;col<=n-row;col=col +1)
//            cout<<"  ";
//            for (col = 1; col <= 2*row-1; col = col +1)
//              cout<<"* ";
//              cout<<endl;
//            }
//      }

// 4.Star pattern like (palindrome pattern)
//             1
//           1 2 1
//         1 2 3 2 1
//       1 2 3 4 3 2 1
//     1 2 3 4 5 4 3 2 1
//  int main()
//  {
//      int row, col;
//      int n ;
//      cout << "Enter the input :";
//      cin >> n;
//      for(row=1;row<=n;row=row+1)
//      {
//          for(col=1;col<=n-row;col=col+1)
//          cout<<"  ";
//          for(col=1;col<=row;col=col+1)
//          cout<<col<<" ";
//          for(col=row-1;col>=1;col=col-1)
//          cout<<col<<" ";
//          cout<<endl;
//  }
//  }

// 5.ULTA PYRAMID
//   int main(){
//      int row,col;
//      int n;
//      cout<<"Enter the input :";
//      cin>>n;
//      for (row=n; row>=1;row=row -1)
//      {
//          for(col= 1;col<=n-row;col=col +1)
//            cout<<"  ";
//            for (col = 1; col <= 2*row-1; col = col +1)
//              cout<<"* ";
//              cout<<endl;
//            }
//      }

// 6.Star pattern
//  int main()
//  { int row, col, n;
//          cout << "enter the input:";
//          cin >> n;
//          for (row = n; row >= 1; row = row - 1)
//          {
//                  // Print *
//                  for (col = 1; col <= row; col = col + 1)
//                          cout << "* ";
//                  // Print space
//                  for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
//                          cout << "  ";
//                  for (col = 1; col <= row; col = col + 1)
//                          cout << "* ";
//                  cout << endl;
//          }
//          for (row = 1; row <=n; row = row +1)
//          {
//                  // Print *
//                  for (col = 1; col <= row; col = col + 1)
//                          cout << "* ";
//                  // Print space
//                  for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
//                          cout << "  ";
//                  for (col = 1; col <= row; col = col + 1)
//                          cout << "* ";
//                  cout << endl;
//          }
//  }

// 7.Star pattern
// int main()
// {
//         int row, col, n;
//         cout << "enter the input :";
//         cin >> n;
//         for (row = 1; row <= n; row = row + 1)
//         { // Print *
//                 for (col = 1; col <= row; col = col + 1)
//                         cout << "* ";
//                 // Print space
//                 for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
//                         cout << "  ";
//                 for (col = 1; col <= row; col = col + 1)
//                         cout << "* ";
//                 cout << endl;
//         }
//         for (row = n - 1; row >= 1; row = row - 1)
//         {
//                 // Print *
//                 for (col = 1; col <= row; col = col + 1)
//                         cout << "* ";
//                 // Print space
//                 for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
//                         cout << "  ";
//                 for (col = 1; col <= row; col = col + 1)
//                         cout << "* ";
//                 cout << endl;
//         }
// }

// 8.star pattern
//   int main(){
//    int row , col;
//   int n ;
//   cout<<"enter the input:";
//   cin>>n;
//   for ( row = 1; row <=n; row = row +1 )
//   {
//    for(col=1; col<=3*n-row;col= col+1)
//    cout<<" ";
//  for(col=1;col<=row-1;col=col+1)
//    cout<<" *";
//    cout<<endl;
//   }
//  for ( row = n-1; row >=1; row = row -1 )
//   {
//    for(col=1; col<=3*n-row;col= col+1)
//    cout<<" ";
//  for(col=1;col<=row-1;col=col+1)
//    cout<<" *";
//    cout<<endl;
//   }
//  }

// DECIMAL TO BINARY
// int main(){
//   int num;
//   cout<<"enter the number :";
//   cin>>num;
// int rem , ans = 0,mul= 1;
// while (num>0)
// {
//   rem= num%2;//reminder
//   num= num/2;//quotient
//   ans=rem*mul +ans;//ans
//   mul=mul*10;//mul
// }
// cout<<ans<<endl;
// }

// BINARY TO DECIMAL
//  int main()
//  {
//    int rem , ans = 0,mul= 1,num;
//    cout<<"enter the input :";
//    cin>>num;
//  while (num>0)
//  {
//    rem= num%10;//reminder
//    num= num/10;//quotient
//    ans=rem*mul +ans;//ans
//    mul=mul*2;//mul
//  }
//  cout<<ans<<endl;
//  }

// DECIMAL TO OCTAL
//  int main(){
//    int num;
//  int rem , ans = 0,mul= 1;
//  cout<<"enter the input :";
//  cin>>num;
//  while (num>0)
//  {
//    rem= num%8;//reminder
//    num= num/8;//quotient
//    ans=rem*mul +ans;//ans
//    mul=mul*10;//mul
//  }
//  cout<<ans<<endl;
//  }

// function code
//  int Sum(int m , int n)
//  {
//      int ans =m+n;
//      return ans;
//  }
//  int main()
//  {
//     int a,b;
//     cout<<"enter 2 no :"<<endl;
//     cin>>a>>b;
//     cout<<Sum(a,b);
//     cout<<endl;
//  }

// prime number code (by function)
//  bool Prime(int n){
//      if(n<2)
//      return 0;
//      for (int i = 2; i < n; i++)
//      {
//          if(n%i==0)
//          return 0;
//      }
//      return 1;
//  }

// int Fact(int n)
// {
//     int ans =1;
//     for (int i = 1; i < n; i++)
//      ans=ans*i;
// }

// int main()
// {
//     int a , b;
//     cout<<"enter the numbers:";
//     cin>>a>>b;
//    cout<<"is 'a' is a prime no. :"<<Prime(a)<<endl;
//     cout<<"factorial of a will be :"<<Fact(a)<<endl;
//     cout<<Prime(b)<<endl;
//     cout<<Fact(b)<<endl;
// }

// int main()
// {
// char C;
//     for (int i = 0; i <= 4; i++)
//     {
//         cout<<"a ";
//     }cout<<endl;
//     for (int i = 0; i <= 4; i++)
//     {
//         cout<<"b ";
//     }cout<<endl;
//     for (int i = 0; i <= 4; i++)
//     {
//         cout<<"c ";
//     }cout<<endl;
//     for (int i = 0; i <= 4; i++)
//     {
//         cout<<"d ";
//     }
//     cout<<endl;
// }

// converting small alphabes into big ones
//  char convert(char name)
//  {
//      char ans= name-'a'+'A';
//      return ans;
//  }
//  int main()
//  {
//      char name;
//      cin>>name;
//      cout<<convert(name)<<endl;
//      return 0;
//  }

// ARMSTRONG NO
int countDigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}
bool Armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)

        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cout << "enter the number:" << endl;
    cin >> num;
    int digit = countDigit(num);
    cout << Armstrong(num, digit);
}
