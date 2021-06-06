#include "jz32_2.h"

using namespace std;

vector<vector<int>> Jz32_2::levelOrder(TreeNode* root)
{
    vector<vector<int>> res;
    queue<TreeNode *> nodes; // 存储本层节点的队列
    queue<unsigned int> level_nums; // 存储每个节点的层序

    // BFS遍历该树
    for (nodes.push(root), level_nums.push(0); nodes.front() != nullptr && !nodes.empty(); nodes.pop(), level_nums.pop())
    {
        if (res.size() <= level_nums.front()) res.push_back(vector<int> ());
        res[level_nums.front()].push_back(nodes.front()->val);
        if (nodes.front()->left != nullptr)
        {
            nodes.push(nodes.front()->left);
            level_nums.push(level_nums.front() + 1);
        }
        if (nodes.front()->right != nullptr)
        {
            nodes.push(nodes.front()->right);
            level_nums.push(level_nums.front() + 1);
        }
    }

    return res;
}
