#include "jz34.h"

using namespace std;

vector<vector<int>> Jz34::pathSum(TreeNode *root, int target)
{
    vector<vector<int>> path;

    path.push_back(vector<int> ());

    dfs(root, path, 0, target); // 迭代寻找所有可能路径

    // 删除空路径
    for (vector<vector<int>>::iterator i = path.begin(); i < path.end();)
    {
        if (!(*i).size()) i = path.erase(i); // 迭代器在删除元素后失效.
        else ++i;
    }

    return path;
}

void Jz34::dfs(TreeNode *root, vector<vector<int>> &path, int path_num, int target)
{
    if (root == nullptr)
    {
        path[path_num].clear();
        return;
    } // 遍历完该路径, 但仍未将target降为零.

    target -= root->val;
    path[path_num].push_back(root->val);

    if (!target && !root->left && !root->right) return; // 当target降为零且为叶子节点表示找到路径.

    path.push_back(path[path_num]); // 增加一条路径
    int path_add_num = path.size() - 1; // 新增路径的序号

    dfs(root->left, path, path_num, target);
    dfs(root->right, path, path_add_num, target);

    return;
}