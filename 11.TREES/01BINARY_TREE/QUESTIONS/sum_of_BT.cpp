#include <iostream>
using namespace std;

// Node of binary tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void Total(Node *root, int &sum)
{
    if (root == NULL) return;
    sum += root->data;
    Total(root->left,sum);
    Total(root->right,sum);
}

int main()
{
    // Creating tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    int sum = 0;

    Total(root, sum);

    cout << "Total Sum = " << sum;

    return 0;
    
}