#ifndef JZ34_H
#define JZ34_H

#include <algorithm>
#include <vector>
#include <string>
#include "TreeNode.h"

using namespace std;

class Jz34
{
private:
    void dfs(TreeNode *root, vector<vector<int>> &path, int path_num, int target);

public:
    vector<vector<int>> pathSum(TreeNode *root, int target);
};

#endif