#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// Node of binary tree 
class Node {
public:

    int data;
    Node* left;
    Node* right;

    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function for level order traversal
vector<int> levelOrder(Node* root) {
    vector<int> ans;

    // if tree is empty
    if(root == NULL)
        return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {

        // take front node
        Node* temp = q.front();
        q.pop();

        // store node value
        ans.push_back(temp->data);

        // push left child
        if(temp->left)
            q.push(temp->left);

        // push right child
        if(temp->right)
            q.push(temp->right);
    }

    return ans;
}

int main() {

    // creating binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans = levelOrder(root);

    // printing answer
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}