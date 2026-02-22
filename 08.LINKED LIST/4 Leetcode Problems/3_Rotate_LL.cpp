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

// Rotate List
ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    int count = 0;
    ListNode *temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    k = k % count;

    if (k == 0)
        return head;

    count -= k;

    ListNode *curr = head;
    ListNode *prev = NULL;

    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;

    ListNode *tail = curr;

    while (tail->next)
        tail = tail->next;

    tail->next = head;

    return curr;
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

    int k = 2;

    head = rotateRight(head, k);

    printList(head);

    return 0;
}