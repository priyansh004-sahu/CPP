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




        // height of Tree
int height(Node* root) {
    if(root == NULL) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt, rightHt) + 1;
}




      // Count of Nodes
int countNode(Node* root) {
    if(root == NULL) return 0;

    int leftNode = countNode(root->left);
    int rightNode = countNode(root->right);
    return (leftNode + rightNode) + 1;
}




    // Sum of Nodes
int sumOfNode(Node* root) {
    if(root == NULL) return 0;

    int leftSum = sumOfNode(root->left);
    int rightSUm = sumOfNode(root->right);
    return leftSum + rightSUm + root->data;
}



int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);

    // cout << "heights: " << height(root) << endl;
    // cout << "count of Node: " << countNode(root) << endl;
    cout << "Sum Of Node: " << sumOfNode(root) << endl;
}