#include "jz07.h"

using namespace std;

TreeNode *Jz07::buildTree(vector<int> &preorder, vector<int> &inorder)
{
    if (preorder.empty())
        return nullptr; // 迭代终止条件

    TreeNode *root = new TreeNode(preorder[0]);
    int left_tree_num = 0;  // 左子树的节点个数
    int right_tree_num = 0; // 右子树的节点个数

    // 遍历中序获得左右子树节点个数
    for (int i = 0; i < inorder.size(); i++)
    {
        if (inorder[i] == preorder[0])
        {
            left_tree_num = i;
            right_tree_num = inorder.size() - i - 1;
            break;
        };
    }

    // 构造左子树
    vector<int> left_pre(preorder.begin() + 1, preorder.begin() + left_tree_num + 1);
    vector<int> left_in(inorder.begin(), inorder.begin() + left_tree_num);
    root->left = buildTree(left_pre, left_in);

    // 构造右子树
    vector<int> right_pre(preorder.begin() + left_tree_num + 1, preorder.begin() + left_tree_num + 1 + right_tree_num);
    vector<int> right_in(inorder.begin() + left_tree_num + 1, inorder.begin() + left_tree_num + 1 + right_tree_num);
    root->right = buildTree(right_pre, right_in);

    return root;
}
