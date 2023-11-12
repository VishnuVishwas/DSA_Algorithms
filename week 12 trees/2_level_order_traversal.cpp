// Level order traversal
// use to traverse the data elements of tree

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
        cout << "Enter the data";
        cin >> data;

        if(data == -1)
            return NULL;

        Node* root = new Node(data);

        cout << "Enter the data for left " << data << " Node " << endl;
        root->left = buildTree();
        cout << "Enter the data for right " << data << " Node " << endl;
        root->right = buildTree();

        return root;
}

void LevelOrderTraversal(Node* root) {
    queue<Node*> q;

// intially
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";

// insert the child of current nodes
        if(temp->left) 
            q.push(temp->left);
        
        if(temp->right) 
            q.push(temp->right);

    }
}

int main() {
    Node* root = NULL;
    root = buildTree();

    LevelOrderTraversal(root);
}