


#include <iostream>
#include <stack>
using namespace std;
// Insert an Element at the Bottom of a Stack
stack<int> insertAtBottom(stack<int> St, int X)
{
    stack<int> helper;

    // Move elements to helper stack
    while (!St.empty())
    {
        helper.push(St.top());
        St.pop();
    }

    // Insert element at bottom
    St.push(X);

    // Put back elements
    while (!helper.empty())
    {
        St.push(helper.top());
        helper.pop();
    }

    return St;
}

int main()
{
    stack<int> st;

    // Pushing elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int X = 5;

    st = insertAtBottom(st, X);

    cout << "Stack after inserting at bottom:\n";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}