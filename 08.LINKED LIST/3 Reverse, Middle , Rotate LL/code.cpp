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

// =======================
// Insert at end
// =======================
void insertAtEnd(ListNode *&head, int value)
{
    ListNode *newNode = new ListNode(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// =======================
// Print Linked List
// =======================
void printList(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// =======================
// Reverse Linked List (Iterative)
// =======================
ListNode *reverseList(ListNode *head)
{
    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *fut = NULL;

    while (curr != NULL)
    {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }

    return prev;
}

// =======================
// Find Middle (Slow-Fast)
// =======================
ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next; 
    }
    return slow;
}
// =======================
// MAIN FUNCTION
// =======================
int main()
{
    ListNode *head = NULL;

    // Creating linked list
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    cout << "Original Linked List:" << endl;
    printList(head);

    // Reverse
    head = reverseList(head);
    cout << "\nReversed Linked List:" << endl;
    printList(head);

    // Middle Node
    ListNode *mid = middleNode(head);
    cout << "\nMiddle Node Value: " << mid->val << endl;

    return 0;
}
