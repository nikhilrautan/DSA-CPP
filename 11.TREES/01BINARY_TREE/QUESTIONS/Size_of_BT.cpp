#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:


    // Function to count total nodes
    int getSize(Node* root) {

        // if tree is empty
        if(root == NULL)
            return 0;

        // count current node + left subtree + right subtree
        return 1 + getSize(root->left) + getSize(root->right);
    }
};