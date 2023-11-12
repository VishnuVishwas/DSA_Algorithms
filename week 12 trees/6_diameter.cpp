// the longest path between 2 nodes 
// we are counting the number of edges (not nodes) in this code

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

int height(Node* root) {
    if(root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;

    return ans;

}

int diameter(Node* root) {
    if(root == NULL)
        return 0;

    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = height(root->left) + height(root->right);

    int ans = max(opt1, max(opt2, opt3));
    return ans;
}

int main() {
    Node* root = NULL;
    root = buildTree();

    LevelOrderTraversal(root);
    cout << "The height of tree is : " << height(root) << endl;

    cout << "The diameter is : " << diameter(root);
}