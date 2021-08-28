#include "jz67.h"

using namespace std;

int Jz67::strToInt(string str)
{
    unsigned int res = 0;        // 存储转换后的数字.
    vector<int> nums{INT32_MAX}; // 存储每位数字, 0号位存储符号.
    bool flag = true;            // 标志是否已经开始读取数字.

    // 将字符串中的每个数字存入数组.
    for (char &ch : str)
    {
        if (ch == '-' && flag)
        {
            nums[0] = INT32_MIN;
            flag = false;
        }
        else if (ch == '+' && flag)
        {
            flag = false;
        }
        else if (ch == ' ' && flag)
        {
        }
        else if (ch < '0' || ch > '9')
            break;
        else
        {
            nums.push_back(ch - '0');
            flag = false;
        }
    }

    // 取出数组中的数组合为数字
    for (int i = 1; i < nums.size(); i++)
    {
        res *= 10;
        res += nums[i];
        if (i < nums.size() - 1 && (res > INT32_MAX / 10 || res * 10 + nums[i + 1] > INT32_MAX))
        {
            res = UINT32_MAX;
            break;
        }
    }

    // 区分正负以及判断是否越界.
    if (nums[0] < 0)
    {
        if (res == UINT32_MAX)
            return INT32_MIN;
        else
            return -1 * (int)res;
    }
    else
    {
        if (res == UINT32_MAX)
            return INT32_MAX;
        else
            return res;
    }
}
