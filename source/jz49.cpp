#include "jz49.h"

using namespace std;

// 状态初始化: f(0)=1
// 状态转移函数: f(i) = min(f(a) * 2, f(b) * 3, f(c) * 5)
int Jz49::nthUglyNumber(int n)
{
    vector<int> dp(n, 0);

    dp[0] = 1;
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 1; i < n; i++)
    {
        dp[i] = min(dp[a] * 2, min(dp[b] * 3, dp[c] * 5));

        if (dp[a] * 2 == dp[i]) a++;
        if (dp[b] * 3 == dp[i]) b++;
        if (dp[c] * 5 == dp[i]) c++;
    }

    return dp.back();
}
