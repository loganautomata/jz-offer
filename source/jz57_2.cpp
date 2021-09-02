#include "jz57_2.h"

using namespace std;

vector<vector<int>> Jz57_2::findContinuousSequence(int target)
{
    vector<int> range(target / 2 + 1);
    vector<vector<int>> res;

    for (int i = 0; i < range.size(); i++)
    {
        range[i] = i + 1;
    }

    for (int begin = 1, end = 2, sum = 3; begin < end;)
    {
        if (sum < target)
        {
            sum += ++end;
        }
        else
        {
            if (sum == target)
            {
                res.push_back(vector<int>(range.begin() + begin - 1, range.begin() + end));
            }
            sum -= begin++;
        }
    }

    return res;
}
