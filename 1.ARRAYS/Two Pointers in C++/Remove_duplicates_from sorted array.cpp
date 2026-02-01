#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q2. Remove Duplicates from Sorted Array.
int removeDuplicates(vector<int> &A)
{
    int n = A.size();
    int i = 0, j = 0, ans = 0;

    while (i < n)
    {
        while (A[i] == A[i + 1] && i < n - 1)
            i++;

        swap(A[i++], A[j++]);
        ans++;
    }
    return ans;
}

int main()
{
    vector<int> A = {1, 1, 2, 2, 3, 3, 4, 4, 5};

    int newSize = removeDuplicates(A);

    cout << "New size: " << newSize << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < newSize; i++)
        cout << A[i] << " ";

    cout << endl;

    return 0;
}
