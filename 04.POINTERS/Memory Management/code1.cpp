#include <iostream>
using namespace std;

int main()
{
    // Dynamically allocate memory for a single integer
    int *ptr = new int;

    // Assign value to the allocated memory
    *ptr = 5;

    // Print address stored in pointer
    cout << ptr << endl;

    // Print value stored at that address
    cout << *ptr << endl;

    // Take size of array from user
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocate memory for an integer array
    int *p = new int[n];

    // Initialize array elements
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    // Print array elements
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }

    // Free dynamically allocated memory (single variable)
    delete ptr;

    // Free dynamically allocated memory (array)
    delete[] p;

    return 0;
}
