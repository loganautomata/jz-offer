#include "jz21.h"

using namespace std;

vector<int> Jz21::exchange(vector<int>& nums)
{
    for (int front = 0, back = nums.size()-1; front < back;)
    {
        if((nums[back] & 1) && !(nums[front] & 1))
        {
            swap(nums[front], nums[back]);
            front++;
            back--;
        }
        else if(nums[front] & 1) front++;
        else if(!(nums[back] & 1)) back--;
    }

    return nums;
}
