#include "jz56_1.h"

using namespace std;

vector<int> Jz56_1::singleNumbers(vector<int> &nums)
{
    vector<int> res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - 1) res.push_back(nums[i]);
        else if (nums[i] != nums[i + 1])
        {
            if (res.empty()) res.push_back(nums[i]);
            else 
            {
                res.push_back(nums[i]);
                break;
            }
        }
        else i++;
    }

    return res;
}
