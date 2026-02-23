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

// Check Palindrome
bool isPalindrome(ListNode *head)
{
    if (!head || !head->next)
        return true;

    int count = 0;
    ListNode *temp = head;

    while (temp)
    {
        count++;
        temp = temp->next;
    }

    count /= 2;

    ListNode *curr = head;
    ListNode *prev = NULL;

    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;

    ListNode *front = NULL;
    prev = NULL;

    while (curr)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    ListNode *head1 = head;
    ListNode *head2 = prev;

    while (head1)
    {
        if (head1->val != head2->val)
            return false;

        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    if (isPalindrome(head))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}