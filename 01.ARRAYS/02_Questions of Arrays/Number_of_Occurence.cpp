#include <iostream>
using namespace std;

int count(int arr[], int n, int x)
{
    int cnt = 0; // renamed to avoid confusion
        for (int i = 0; i < n; i++)
    {
        if (arr[i] == x) // agr match krta hai to count ki value bdha do
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int arr[]= {1,2,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]); // no of elements nikalnae k liye
    int x=2;
    cout<<"Count =" << count(arr,n,x);
}