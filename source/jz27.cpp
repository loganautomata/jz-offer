#include "jz27.h"

using namespace std;

TreeNode* Jz27::mirrorTree(TreeNode* root)
{
    if (root == nullptr) return nullptr; // 迭代终止

    TreeNode* left = root->left; // 存放未调换顺序前的左节点

    // 左右子树交换
    root->left = mirrorTree(root->right);
    root->right = mirrorTree(left); 

    return root;
}
