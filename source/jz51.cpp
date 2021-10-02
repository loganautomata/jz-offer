#include "jz51.h"

using namespace std;

int Jz51::MergeArr(vector<vector<int>> &arr, vector<vector<int>> &arr_temp, int num)
{
    int res = 0;
    vector<int> merge_arr;

    for (int i = 0, j = 0; i < arr[num].size() || j < arr[num - 1].size();)
    {
        if (i == arr[num].size())
        {
            merge_arr.insert(merge_arr.end(), arr[num - 1].begin() + j, arr[num - 1].end());
            j = arr[num - 1].size();
        }
        else if (j == arr[num - 1].size())
        {
            merge_arr.insert(merge_arr.end(), arr[num].begin() + i, arr[num].end());
            i = arr[num].size();
        }
        else
        {
            if (arr[num][i] < arr[num - 1][j])
            {
                merge_arr.push_back(arr[num][i]);
                i++;
                res += (arr[num - 1].size() - j);
            }
            else
            {
                merge_arr.push_back(arr[num - 1][j]);
                j++;
            }
        }
    }

    arr_temp.push_back(merge_arr);

    return res;
}

int Jz51::reversePairs(vector<int> &nums)
{
    vector<vector<int>> arr(nums.size(), vector<int>(1, 0));
    int res = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i][0] = nums[i];
    }

    while (arr.size() > 1)
    {
        vector<vector<int>> arr_temp;
        int i = 1;
        for (; i < arr.size(); i += 2)
        {
            res += MergeArr(arr, arr_temp, i);
        }
        if (i == arr.size()) arr_temp.push_back(arr[i - 1]);
        arr = arr_temp;
    }

    return res;
}
