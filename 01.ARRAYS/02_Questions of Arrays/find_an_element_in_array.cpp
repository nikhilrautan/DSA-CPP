//find an element in our array
#include<iostream>
using namespace std;
    int main()
    {
     int arr[3][4]={1,2,3,4,5,6,7,8}; // we have an array of 3 rows and 4 Columns
     int x = 7;
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == x)
            {
                cout << "Yes";// if the element is present in the array print YES
                return 0;
            }
        }
                cout << "No";// not present so print NO
    }
