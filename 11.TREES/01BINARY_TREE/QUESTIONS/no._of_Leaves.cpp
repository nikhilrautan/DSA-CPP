#include<iostream>
using namespace std;

struct Node {

    int data;
    Node* left;
    Node* right;

    Node(int val) {

        data = val;
        left = right = NULL;
    }
};
 int CountLeaf(Node* root)
 {
    if(root==NULL) return 0;
    if(!root->left && !root->right)
    return 1;
    
    return (CountLeaf(root->left) + CountLeaf(root->right));
 }
 int main()
 {
    
 }