#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Delete Every Kth Node
Node *deleteK(Node *head, int k)
{
    if (k == 1)
        return NULL;

    Node *curr = head;
    Node *prev = NULL;

    int count = 1;

    while (curr)
    {
        if (count == k)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
    }

    return head;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;
    head = deleteK(head, k);

    printList(head);
    return 0;
}