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

void LevelByLevel(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);   // in 1st level only 1 node-root, definately NULL -> next line 

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // I need to add NULL after every level
        if(temp == NULL) {
            cout << endl;         // so that i can come next line
            if(!q.empty())
                q.push(NULL);
        }

        else{                  // normal push left and right node to queue
            cout << temp->data << " ";
            if(temp->left) 
                q.push(temp->left);
            if(temp->right) 
                q.push(temp->right);
        }
    }
}


int main() {
    Node* root = NULL;
    root = buildTree();

    LevelByLevel(root);
}