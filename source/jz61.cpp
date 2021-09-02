#include "jz61.h"

using namespace std;

bool Jz61::isStraight(vector<int> &nums)
{
    bool res = true;

    sort(nums.begin(), nums.end());

    for (int i = 0, count = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == 0)
            count++;
        else
        {
            if (nums[i] + 1 < nums[i + 1])
            {
                if ((count -= (nums[i + 1] - nums[i] - 1)) < 0)
                {
                    res = false;
                    break;
                }
            }
            else if (nums[i] == nums[i + 1])
            {
                res = false;
                break;
            }
        }
    }

    return res;
}
