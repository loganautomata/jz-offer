#include "jz45.h"

using namespace std;

string Jz45::minNumber(vector<int>& nums)
{
    priority_queue<string, vector<string>, compare_str> nums_str;
    string res = "";

    for (int &num : nums)
    {
        nums_str.push(to_string(num));
    }

    while (!nums_str.empty())
    {
        res += nums_str.top();
        nums_str.pop();
    }

    return res;
}

// string Jz45::minNumber(vector<int>& nums)
// {
//     vector<string> nums_str;
//     string res = "";

//     for (int &num : nums)
//     {
//         nums_str.push_back(to_string(num));
//     }

//     sort(nums_str.begin(), nums_str.end(), compare_str());

//     for (string &str : nums_str)
//     {
//         res += str;
//     }

//     return res;
// }
