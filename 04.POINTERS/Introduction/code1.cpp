#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    // Printing address of variable a
    cout << &a << endl;

    // Pointer storing address of a
    int *ptr = &a;
    cout << ptr << endl;

    // Size of pointer (not size of int)
    cout << sizeof(ptr) << endl;

    
    // Dereferencing pointer to get value
    cout << *ptr << endl;

    int b = 15;
    ptr = &b;   // Pointer now points to b

    cout << ptr << endl;

    return 0;
}
