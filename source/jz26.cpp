#include "jz26.h"

using namespace std;

bool Jz26::CompareTrees(TreeNode *A, TreeNode *B)
{
    if (B == nullptr) return true; // 迭代终止条件, B为A的子结构.
    if (A == nullptr || A->val != B->val) return false; // 迭代终止条件, B不是A的子结构.

    return CompareTrees(A->left, B->left) && CompareTrees(A->right, B->right); // 比较左子树和右子树
}

bool Jz26::isSubStructure(TreeNode* A, TreeNode* B)
{
    bool res = false;

    if(A == nullptr || B == nullptr) return false; // 迭代终止条件, A遍历完毕或B为空.

    return CompareTrees(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
}
