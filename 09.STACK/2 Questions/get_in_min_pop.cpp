#include <iostream>
#include <stack>
using namespace std;

//  Get min at pop
stack<int> _push(int arr[], int n)
{
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            st.push(arr[i]);
        else
            st.push(min(arr[i], st.top()));
    }

    return st;
}

// Function to print minimum at each pop
void _getMinAtPop(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    int arr[] = {1, 6, 2, 4};
    int n = 4;

    stack<int> st = _push(arr, n);

    cout << "Minimum at each pop: ";
    _getMinAtPop(st);

    return 0;
}