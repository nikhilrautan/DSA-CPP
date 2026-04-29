#include<iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node*next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

Node* createLinkedList(int arr[],int index,int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node* temp;
    temp =new Node(arr[index]);
    temp->next =createLinkedList(arr,index+1,size);
    return temp;
}

 int main()
 {
    Node* Head;
    Head =NULL;
    int arr[]={2,4,6,8};
    Head =createLinkedList(arr,0,4);
    while(Head)
    {
        cout<<Head->data <<" ";
        Head = Head->next;
    }

 }