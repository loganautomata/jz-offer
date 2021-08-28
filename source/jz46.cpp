#include "jz46.h"

using namespace std;

int Jz46::TranString(string num_str)
{
    if (num_str.empty())
        return 1;

    int tran_max = TranString(num_str.substr(1));

    if (num_str.size() > 1 && stoi(num_str.substr(0, 2)) < 26 && stoi(num_str.substr(0, 2)) > 9)
    {
        tran_max += TranString(num_str.substr(2));
    }

    return tran_max;
}

// int Jz46::translateNum(int num)
// {
//     return this->TranString(to_string(num));
// }

int Jz46::translateNum(int num)
{
    // 初始状态: f(0) = f(1) = 1 
    // 转移函数: f(i) = f(i-1) + f(i-2)
    //          f(i) = f(i-1)
    // ps: 参数为数字位数

    vector<int> dp(2, 1);
    string num_str = to_string(num);

    for (int i = 2; i < num_str.size() + 1; i++)
    {
        int trans = dp[i - 1];
        int num_sub = stoi(num_str.substr(i - 2, 2));

        if(num_sub > 9 && num_sub < 26)
        {
            trans += dp[i - 2];
        }

        dp.push_back(trans);
    }

    return dp.back();
}
