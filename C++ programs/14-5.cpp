#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

int height(TreeNode* node, int& diam) {
    if (!node) return 0;
    int l = height(node->left, diam);
    int r = height(node->right, diam);
    diam = std::max(diam, l + r);
    return 1 + std::max(l, r);
}

int diameter(TreeNode* root) {
    int diam = 0;
    height(root, diam);
    return diam;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << diameter(root) << endl;
    return 0;
}