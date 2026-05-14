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
