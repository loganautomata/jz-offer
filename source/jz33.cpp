#include "jz33.h"

using namespace std;

bool Jz33::verifyPostorder(vector<int> &postorder)
{
    return dfs(postorder, make_pair(0, postorder.size()));
}

bool Jz33::dfs(vector<int> &postorder, pair<int, int> range)
{
    if (range.second <= range.first)
        return true; // 迭代终止条件, 区间中只有一个数的时候.

    pair<int, int> left_range(range.first, 0);       // 左子树的区间, 左闭右开.
    pair<int, int> right_range(0, range.second - 1); // 右子树的区间, 左闭右开.

    for (; postorder[right_range.first] < postorder[range.second - 1]; right_range.first++); // 遍历求出左右子树的区间

    left_range.second = right_range.first;

    // 循环判断是否满足搜索二叉树的条件.
    for (int i = right_range.first; i < right_range.second; i++)
        if (postorder[i] <= postorder[range.second - 1])
            return false;

    return dfs(postorder, left_range) && dfs(postorder, right_range);
}
