#include<iostream>
using namespace std;
// In this question we are finding the fibonacci series till the num.
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int arr[num - 1];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < num; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[num - 1];
}