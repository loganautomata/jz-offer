#ifndef JZ54_H
#define JZ54_H

#include <algorithm>
#include <vector>
#include <string>
#include "TreeNode.h"

using namespace std;

class Jz54
{
private:
    int k = 0;
    int res = 0;

    void dfs(TreeNode *cur, vector<int> &nums);
    void dfs_rcl(TreeNode *cur);

public:
    int kthLargest(TreeNode *root, int k);
};

#endif