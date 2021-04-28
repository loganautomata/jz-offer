#include "jz03.h"

using namespace std;

// int Jz03::findRepeatNumber(vector<int> &nums)
// {
//     unordered_map<int, bool> nums_map; //已经存储在hash表中的数字

//     for(vector<int>::iterator it = nums.begin(); it < nums.end(); it++)
//     {
//         if(nums_map[*it]) return *it; //判断该值是否已在hash_map中
//         else nums_map[*it] = true;
//     }

//     return -1;
// }

int Jz03::findRepeatNumber(vector<int> &nums)
{
    //将数组的下标和数组中的值映射为hash_map中的key和value
    for(vector<int>::iterator it = nums.begin(); it < nums.end(); it++)
    {
        if(*it == nums[*it]) //比较value值是否在hash_map中
        {
            if ((vector<int>::iterator)&nums[*it] == it) continue; //比较对应的key值是否与hash_map中的key相等
            else return (*it); 
        }
        else swap(*it, nums[*it]);
    }

    return -1;
}
