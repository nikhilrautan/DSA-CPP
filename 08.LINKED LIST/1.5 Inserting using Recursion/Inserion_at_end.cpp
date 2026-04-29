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

// 1 Inserting at the End (One after Another)
Node *createLinkedList(int arr[],int index , int size)
{
  if(index ==size)//base condition
  {
    return NULL;
  }
  Node *temp;
  temp = new Node(arr[index]);
  temp->next =createLinkedList(arr, index+1,size);
  return temp;
}
int main()
{
    Node *head;
    head= NULL;
    int arr[]={2,4,6,8};
    head = createLinkedList(arr,0,4);
    
    // 🔹 Print Linked List
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}