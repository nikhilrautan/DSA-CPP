#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next =NULL;
    }
};

// 2 Insert at Beginning using Recursion
Node* createLinkedList(int arr[], int index, int size, Node* prev)
{
    if(index == size)  // base condition
        return prev;

    Node* temp = new Node(arr[index]);
    temp->next = prev;

    return createLinkedList(arr, index+1, size, temp);
}

int main()
{
    int arr[] = {2,4,6,8};

    Node* head = createLinkedList(arr, 0, 4, NULL);

    // Print
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
