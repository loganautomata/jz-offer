#include "jz32_1.h"

using namespace std;

vector<int> Jz32_1::levelOrder(TreeNode *root)
{
    vector<int> res;
    queue<TreeNode *> nodes; // 存储本层节点的队列

    // BFS遍历该树
    for (nodes.push(root); nodes.front() != nullptr && !nodes.empty(); nodes.pop())
    {
        res.push_back(nodes.front()->val);
        if (nodes.front()->left != nullptr) nodes.push(nodes.front()->left);
        if (nodes.front()->right != nullptr) nodes.push(nodes.front()->right);
    }

    return res;
}

