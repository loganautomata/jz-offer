#include "jz10_1.h"

using namespace std;

int Jz10_1::fib(int n)
{
    int dp[n + 1]; // 存储动态规划各状态的数组

    for (int i = 0; i <= n; i++)
    {
        if (i < 2)
            dp[i] = i; // 初始状态的值
        else
            dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007; // 状态转移方程
    }

    return dp[n];
}
