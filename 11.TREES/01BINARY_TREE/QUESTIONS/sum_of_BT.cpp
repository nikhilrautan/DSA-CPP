#include<iostream>
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
void Total(Node* root,int &sum)
{
    if(root==NULL)
}