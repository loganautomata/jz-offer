#include "jz57_1.h"

using namespace std;

vector<int> Jz57_1::twoSum(vector<int> &nums, int target)
{
    unordered_set<int> nums_set;
    vector<int> res(2);

    for (auto &num : nums)
    {
        nums_set.insert(num);
    }

    for (auto &num : nums)
    {
        if (nums_set.find(target - num) != nums_set.end())
        {
            res = {num, target - num};
            break;
        }
    }

    return res;
}
