#include <iostream>
using namespace std;

    // 1.Iteration method
// int main()
// {
//     for(int i=5; i>0; i--)
//     {
//         cout<<i<<"days left for birthday";
//         cout<<endl;
//     }
//     cout<<"Happy birthay";
// }


     // 2.function call method
// void fun3(int n)
// {
//     cout << n << " Days left for birthday" << endl;
// }
// void fun2(int n)
// {
//     cout << n << " Days left for birthday" << endl;
// }
// void fun1(int n)
// {
//     cout << n << " Days left for birthday" << endl;
// }
// void fun0(int n)
// {
//     cout << "Happy Birthday";
// }
// int main()
// {
//     int n = 3;
//     fun3(3);
//     fun2(2);
//     fun1(1);
//     fun0(0);
// }


     // 3. By only calling one function
// void fun0(int n)
// {
//     cout << "Happy Birthday";
// }
// void fun1(int n)
// {
//     cout << n << " Days left for birthday" << endl;
//     fun0(0);
// }
// void fun2(int n)
// {
//     cout << n << " Days left for birthday" << endl;
//     fun1(n - 1);
// }
// void fun3(int n)
// {
//     cout << n << " Days left for birthday" << endl;
//     fun2(n - 1);
// }

// int main()
// {
//     int n = 3;
//     fun3(3);
// }


       // 4.By using single funtion
// void fun3(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         cout << "Happy Birthday\n";
//         return;
//     }
//     cout << n << " days left for birthday\n";
//     fun3(n - 1);
// }
//   int main()
// {
//     int n=3;
//     fun3(3);
// }
