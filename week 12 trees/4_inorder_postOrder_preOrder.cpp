// Inorder, postOrder and preOrder traversal

// Printing the nodes level after level - endl

#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree() {
    int data;
    cout << "Enter the value : " << endl;
    cin >> data;

    if(data == -1) 
        return NULL;

    Node* root = new Node(data);

    cout << "Enter the left " << data << " Node " << endl;
    root->left = buildTree();
    cout << "Enter the right " << data << "Node" << endl;
    root->right = buildTree();

    return root;
} 

// Inorder traversal
void inOrder(Node* root) {
    if(root == NULL)
        return ;
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// preorder traversal
void preOrder(Node* root) {
    if(root == NULL)
        return ;
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// postorder traversal
void postOrder(Node* root) {
    if(root == NULL)
        return ;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;
    root = buildTree();

    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
}