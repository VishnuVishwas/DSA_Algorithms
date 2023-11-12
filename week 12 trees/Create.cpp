// Creating a binary tree using recurssion 

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

// creating node
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// taking input and linking the nodes 
Node* buildTree() {
    int data;
    cout << "Enter the data : " << endl;
    cin >> data;

// base case
    if(data == -1)
        return NULL;

// creating the obj for Node class 
    Node* root = new Node(data);       // asking the constructor of node class to create a node

// linking the left node to next left child node - recursion
    cout << "Enter the data into left " << data << " node" << endl;
    root->left = buildTree();           

// linking the right node to next right child node - recursion
    cout << "Enter the data into right" << data << " node" << endl;
    root->right = buildTree();

    return root;
} 

int main() {
    Node* root = NULL;
    root = buildTree();
}