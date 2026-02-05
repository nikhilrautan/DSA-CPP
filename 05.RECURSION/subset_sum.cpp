#include <iostream>
using namespace std;

void print(int arr[], int index,int n, int sum)
{
    if (index == n)
    {
        cout << sum << endl;
        return;
    }
    print(arr,index+1,n,sum);//no
    print(arr, index+1,n,sum +arr[index]);

}
int main()
{
    int arr[]= {3,4,5};
    print(arr,0,3,0);
}