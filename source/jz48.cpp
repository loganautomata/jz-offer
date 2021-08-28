#include "jz48.h"

using namespace std;

// 状态初始化: f(0) = 0, f(1) = 1.
// 状态转移函数: f(i) = max(f(i - 1), 以第i个字符结尾的最长的不重复连续字符串个数g(i)).
int Jz48::lengthOfLongestSubstring(string s)
{
    if (s.empty())
        return 0;

    vector<int> dp(s.size(), 0);
    unordered_set<char> ch_hash;
    int str_start = 0;

    dp[0] = 1;
    ch_hash.insert(s[0]);

    for (int i = 1; i < s.size(); i++)
    {
        if (ch_hash.find(s[i]) != ch_hash.end())
        {
            for (; s[str_start] != s[i]; str_start++)
            {
                ch_hash.erase(s[str_start]);
            }
            if (str_start != i)
                str_start++;
        }
        ch_hash.insert(s[i]);

        dp[i] = max(dp[i - 1], i - str_start + 1);
    }

    return dp.back();
}
