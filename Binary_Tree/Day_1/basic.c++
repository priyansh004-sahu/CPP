#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class Node {
    public : 
       int data;
       Node* left;
       Node* right;

       Node(int val) {
           data = val;
           left = right = NULL;
       }
};

static int idx = -1;
Node* buildTree(vector<int> preorder) {
    idx++;
    
    if(preorder[idx] == -1) return NULL;  //  base Case

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); // Left 
    root->right = buildTree(preorder); // right 

    return root;
}

            // PreOrder Traversal Tree
void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }
   
    cout << root-> data << " ";
    preOrder(root->left);
    preOrder(root->right);

}

        // InOrder Traversal Tree
void InOrder(Node* root) {
    if(root == NULL) {
        return;
    }
   
    InOrder(root->left);
    cout << root-> data << " ";
    InOrder(root->right);

}

        // postOrder Traversal Tree
void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }
   
    postOrder(root->left);
    postOrder(root->right);
    cout << root-> data << " ";
    
}


// Level Order Traversal
void levelOrder(Node* root) {
    queue<Node*> q;

    q.push(root);

    while(q.size() > 0) {
        Node* curr = q.front();
        q.pop();

        cout << curr->data << "";

        if(curr->left != NULL){
            q.push(curr->left);
        };

        if(curr->right != NULL){
            q.push(curr->right);
        };
    };
    cout << endl;
};


     //    printlevelOrder at each level
void printlevelOrder(Node* root) {
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0) {
        Node* curr = q.front();
        q.pop();

        if(curr == NULL) {
            if(!q.empty()) {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else break;
        }

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        };

        if(curr->right != NULL){
            q.push(curr->right);
        };
    } 
};
int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    
    Node* root = buildTree(preorder);
  
    // Safely print data
    // if (root) cout << "Root: " << root->data << endl;
    // if (root && root->left) cout << "Left: " << root->left->data << endl;
    // if (root && root->right) cout << "Right: " << root->right->data << endl;

    preOrder(root);    // preOrder
    cout << endl;
    InOrder(root);      // InOrder
    cout << endl;
    postOrder(root);    // postOrder
    cout << endl;
    levelOrder(root);    // levelOrder
    cout << endl;
    printlevelOrder(root);   // printlevelOrder
    cout << endl;
    return 0;
}