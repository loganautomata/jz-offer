#include "jz55_1.h"

using namespace std;

int Jz55_1::maxDepth(TreeNode* root)
{
    if (root == nullptr) return 0;

    return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
}
