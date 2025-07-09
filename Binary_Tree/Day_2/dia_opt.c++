
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

int ans = 0;

int height(TreeNode* root) {
    if (root == nullptr) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    // Diameter through the current node = left height + right height
    ans = max(ans, leftHt + rightHt);

    return max(leftHt, rightHt) + 1;
}

int diameterOfBinaryTree(TreeNode* root) {
    ans = 0; // Important to reset for multiple test cases
    height(root);
    return ans;
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
