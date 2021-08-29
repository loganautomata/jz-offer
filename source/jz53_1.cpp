#include "jz53_1.h"

using namespace std;

int Jz53_1::search(vector<int>& nums, int target)
{
    int res = 0;

    for (auto &num : nums)
    {
        if (num > target) break;
        else if (num == target) res++;
    }

    return res;
}
