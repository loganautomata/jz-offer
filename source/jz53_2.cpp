#include "jz53_2.h"

using namespace std;

int Jz53_2::missingNumber(vector<int> &nums)
{
    int res = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            if (nums[i] != 0)
            {
                res = 0;
                break;
            }
        }
        if (i < nums.size() - 1)
        {
            if (nums[i + 1] - nums[i] != 1)
            {
                res = nums[i] + 1;
                break;
            }
        }
    }

    return res;
}
