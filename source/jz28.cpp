#include "jz28.h"

using namespace std;

bool Jz28::IsMirror(TreeNode* left, TreeNode* right)
{
    if(left == nullptr && right == nullptr) return true;
    else if (left == nullptr || right == nullptr || left->val != right->val) return false; // 迭代终止条件, 遍历完至少一颗树, 或者发现两颗树不是镜像.

    return IsMirror(left->right, right->left) && IsMirror(left->left, right->right);
}

bool Jz28::isSymmetric(TreeNode* root)
{
    if (root == nullptr) return true; // 排除树为空的特殊情形

    return IsMirror(root->left, root->right);
}
