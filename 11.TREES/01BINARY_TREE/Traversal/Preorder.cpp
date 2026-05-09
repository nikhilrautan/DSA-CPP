#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        left = right = NULL;
        data = value;
    }
};

void Preorder(Node *root)
{
   if(root ==NULL) return;
     cout<<root->data;
     Preorder(root->left);
    Preorder(root->right);
}
int main()
{
    
}