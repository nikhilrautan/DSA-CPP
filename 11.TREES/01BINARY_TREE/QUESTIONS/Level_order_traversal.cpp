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

    if(root == NULL)
        return ans;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        ans.push_back(temp->data);

        if(temp->left)
            q.push(temp->left);

        if(temp->right)
            q.push(temp->right);
    }

    return ans;
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> ans = levelOrder(root);

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}