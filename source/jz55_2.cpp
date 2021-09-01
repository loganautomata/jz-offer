#include "jz55_2.h"

using namespace std;

int Jz55_2::maxDepth(TreeNode* root)
{
    if (root == nullptr) return 0;

    return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
}

bool Jz55_2::isBalanced(TreeNode* root)
{
    if (root == nullptr) return true;

    return abs(maxDepth(root->left) - maxDepth(root->right)) < 2 && isBalanced(root->left) && isBalanced(root->right);
}
