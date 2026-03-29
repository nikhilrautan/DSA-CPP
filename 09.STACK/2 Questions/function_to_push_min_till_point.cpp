
#include <iostream>
#include <stack>
using namespace std;

// Function to push minimum till that point
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


// Function to print minimum value in stack each time while popping
void _getMinAtPop(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    int arr[] = {1, 6, 2, 4};
    int n = 4;

    stack<int> s = _push(arr, n);

    cout << "Minimum element at each pop: ";
    _getMinAtPop(s) ;

    return 0;
}