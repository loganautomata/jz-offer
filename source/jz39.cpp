#include "jz39.h"

using namespace std;

int Jz39::majorityElement(vector<int>& nums)
{
    unordered_map<int, int> counts_num;
    int max = nums[0];

    for (auto num : nums)
    {
        if (counts_num.find(num) == counts_num.end()) counts_num[num] = 1;
        else counts_num[num]++;
        if (counts_num[num] > nums.size() / 2)
        {
            max = num;
            break;
        }
    }

    return max;
}
