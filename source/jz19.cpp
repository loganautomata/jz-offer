#include "jz19.h"

using namespace std;

bool Jz19::isMatch(string s, string p)
{
    vector<vector<bool>> dp(s.size() + 1, vector<bool>(p.size() + 1, false)); // 二维动态规划数组

    // 初始状态
    dp[0][0] = true;
    for (int i = 2; i < dp[0].size(); i += 2)
    {
        dp[0][i] = dp[0][i - 2] && p[i - 1] == '*';
    }

    // 状态转移
    for (int i = 1; i < dp.size(); i++)
    {
        for (int j = 1; j < dp[0].size(); j++)
        {
            if (p[j - 1] == '*')
            {
                if (dp[i][j - 2] || (dp[i - 1][j] && (p[j - 2] == '.' || p[j - 2] == s[i - 1])))
                {
                    dp[i][j] = true;
                }
            }
            else
            {
                if (dp[i - 1][j - 1] && (p[j - 1] == '.' || p[j - 1] == s[i - 1]))
                {
                    dp[i][j] = true;
                }
            }
        }
    }

    return dp.back().back();
}
