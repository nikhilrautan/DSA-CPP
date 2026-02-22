#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Remove Nth Node From End
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    int count = 0;
    ListNode *temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    count -= n;

    if (count == 0)
    {
        temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    ListNode *curr = head;
    ListNode *prev = NULL;

    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    delete curr;

    return head;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2;

    head = removeNthFromEnd(head, n);

    printList(head);

    return 0;
}