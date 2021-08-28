#include "jz59_1.h"

using namespace std;

vector<int> Jz59_1::maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> window;  // 窗口
    vector<int> max_num; // 最大值

    // 窗口初始化
    for (int i = 0; i < k && i < nums.size(); i++)
    {
        window.push_back(nums[i]);
    }

    if (window.size() == 0)
        return max_num; // 当滑动窗口为空时无最大值.

    // 求第一个窗口的最大值
    max_num.push_back(*max_element(window.begin(), window.end()));

    // 求每个窗口的最大值
    for (int i = k; i < nums.size(); i++)
    {
        int delete_num = window.front();
        int new_max;
        window.erase(window.begin());
        window.push_back(nums[i]);

        if (delete_num == max_num[i - k] && find(window.begin(), window.end(), delete_num) == window.end())
        {
            new_max = *max_element(window.begin(), window.end());
        }
        else
            new_max = max(nums[i], max_num[i - k]);

        max_num.push_back(new_max);
    }

    return max_num;
}
