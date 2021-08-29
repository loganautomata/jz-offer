#include "jz56_2.h"

using namespace std;

int Jz56_2::singleNumber(vector<int>& nums)
{
    int res = 0;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i += 3)
    {
        if (i == nums.size() - 1) res = nums[i];
        else if (nums[i + 1] != nums[i])
        {
            res = nums[i];
            break;
        }
    }

    return res;
}
