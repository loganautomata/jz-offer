#include "jz42.h"

using namespace std;

int Jz42::maxSubArray(vector<int> &nums)
{
    int dp_max = nums[0]; // 子数组的最大连续多个整数的值

    for (int sum = 0, i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (dp_max < sum) dp_max = sum;
        if (sum < 0) sum = 0;
    }

    return dp_max;
}
