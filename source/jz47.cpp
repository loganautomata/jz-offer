#include "jz47.h"

using namespace std;

int Jz47::MaxSum(vector<vector<int>>& grid, int col, int row)
{
    if (col == grid.size() - 1 && row == grid[0].size() - 1) return grid[col][row];

    int down = INT32_MIN;
    int right = INT32_MIN;
    int max_sum = INT32_MIN;

    if (col < grid.size() - 1) down = MaxSum(grid, col + 1, row);
    if (row < grid[0].size() - 1) right = MaxSum(grid, col, row + 1);
    max_sum = max(down, right) + grid[col][row];

    return max_sum;
}

// 迭代
// int Jz47::maxValue(vector<vector<int>>& grid)
// {
//     return MaxSum(grid, 0, 0);
// }

// 动态规划
// 状态初始化: f(0, 0) = grid[0][0]
// 状态转移函数: f(col, row) = max(f(col-1, row), f(col, row-1)) + grid[col][row]
int Jz47::maxValue(vector<vector<int>>& grid)
{
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));

    dp[0][0] = grid[0][0];

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            int up = INT32_MIN;
            int left = INT32_MIN;

            if (i == 0 && j == 0) continue;
            if (i > 0) up = dp[i - 1][j];
            if (j > 0) left = dp[i][j - 1];

            dp[i][j] = max(up, left) + grid[i][j];
        }
    }

    return dp.back().back();
}
