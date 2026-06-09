#include<iostream>
using namespace std;\

// Using Recursion
struct Node {

    int data;
    Node* left;
    Node* right;

    Node(int val) {

        data = val;
        left = right = NULL;
    }
};

// Normal function
int getSize(Node* root) {

    if(root == NULL)
        return 0;

    return 1 + getSize(root->left) + getSize(root->right);
}

// main function
int main() {
    
    // Creating tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout << getSize(root);
    return 0;
}