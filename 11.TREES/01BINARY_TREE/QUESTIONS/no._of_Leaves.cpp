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
 void CountLeaf(Node* root)
 {
    if(root==NULL) return 0;

 }