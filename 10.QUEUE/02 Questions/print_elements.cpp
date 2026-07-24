#include <iostream>
#include <queue>
using namespace std;

// print elements withouut removing 
int main()
{
    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);

    //value print karao
    int n = q.size();

    while(n--)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }


    // ab elements present hai ki nhii ? dekhne k liye size print krado
    cout<<q.size()<<endl;
}
