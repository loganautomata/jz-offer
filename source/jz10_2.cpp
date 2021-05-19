#include "jz10_2.h"

using namespace std;

int Jz10_2::numWays(int n)
{
    int dp[n + 1];

    for (int i = 0; i <= n; i++)
    {
        if (i < 2)
            dp[i] = 1; // 给动态规划初始状态赋值
        else
            dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007; // 每级台阶的跳法等于前两阶之和.
    }

    return dp[n];
}
