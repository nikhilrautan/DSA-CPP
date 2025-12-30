// string uses dynamic memory allocation
#include<iostream>
using namespace std;

int main(){
    // char arr[] = {'a', 'p','p','l','e'};
    // for(int i=0; i<5; i++)
    // cout<<arr[i];
    // using cin we can't use space , enter or tab in out input section , to overcome this we use = getline(cin, array);
    string s;
    getline(cin, s);
    cout<<s;
    

}