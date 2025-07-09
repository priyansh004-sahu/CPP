#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

// Global height function
int height(TreeNode* root) {
    if (root == nullptr) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt, rightHt) + 1;
}

// Global diameter function
int diameterOfBinaryTree(TreeNode* root) {
    if (root == nullptr) return 0;

    int leftDiam = diameterOfBinaryTree(root->left);
    int rightDiam = diameterOfBinaryTree(root->right);
    int currDiam = height(root->left) + height(root->right);

    return max(currDiam, max(leftDiam, rightDiam));
}


int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter of Binary Tree: " << diameterOfBinaryTree(root) << endl;

    return 0;
}
