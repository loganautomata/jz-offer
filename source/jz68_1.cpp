#include "jz68_1.h"

using namespace std;

TreeNode *Jz68_1::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root->val > max(p->val, q->val))
        return lowestCommonAncestor(root->left, p, q);
    else if (root->val < min(p->val, q->val))
        return lowestCommonAncestor(root->right, p, q);
    else
        return root;
}
