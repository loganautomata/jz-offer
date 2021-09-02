#include "jz68_2.h"

using namespace std;

TreeNode *Jz68_2::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == nullptr)
        return nullptr;

    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);

    if (((left == p || root == p) && (right == q || root == q)) || ((left == q || root == q) && (right == p || root == p)))
        return root;
    else if (left != nullptr)
        return left;
    else if (right != nullptr)
        return right;
    else if (root == p || root == q)
        return root;
    else
        return nullptr;
}
