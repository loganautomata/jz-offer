#include "jz54.h"

using namespace std;

void Jz54::dfs(TreeNode *cur, vector<int> &nums)
{
    if (cur == nullptr)
    {
        return;
    }

    dfs(cur->left, nums);
    nums.push_back(cur->val);
    dfs(cur->right, nums);
}

void Jz54::dfs_rcl(TreeNode *cur)
{
    if (cur == nullptr || k == 0)
        return;

    dfs_rcl(cur->right);
    if (--k == 0)
        res = cur->val;
    dfs_rcl(cur->left);
}

// int Jz54::kthLargest(TreeNode *root, int k)
// {
//     vector<int> nums;
//     int res = 0;

//     dfs(root, nums);
//     res = nums[nums.size() - k];

//     return res;
// }

int Jz54::kthLargest(TreeNode *root, int k)
{
    this->k = k;
    dfs_rcl(root);

    return res;
}
