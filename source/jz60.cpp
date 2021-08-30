#include "jz60.h"

using namespace std;

void Jz60::dfs(int n, int sum, int &counts, map<int, int, greater<int>> &num_count)
{
    if (n == 0)
    {
        auto ins = num_count.insert(make_pair(sum, 1));
        if (!ins.second)
            ins.first->second++;
        counts++;
        return;
    }

    n--;
    dfs(n, sum + 1, counts, num_count);
    dfs(n, sum + 2, counts, num_count);
    dfs(n, sum + 3, counts, num_count);
    dfs(n, sum + 4, counts, num_count);
    dfs(n, sum + 5, counts, num_count);
    dfs(n, sum + 6, counts, num_count);
}

// vector<double> Jz60::dicesProbability(int n)
// {
//     int counts = 0;
//     map<int, int, greater<int>> num_count;
//     vector<double> res;

//     dfs(n, 0, counts, num_count);

//     for (auto num : num_count)
//     {
//         res.push_back((double)num.second / (double)counts);
//     }

//     return res;
// }

vector<double> Jz60::dicesProbability(int n)
{
    vector<double> res(6, 1.0 / 6.0);

    for (int i = 1; i < n; i++)
    {
        vector<double> temp(6 + 5 * i, 0);

        for (int j = 0; j < res.size(); j++)
        {
            for (int k = j; k < j + 6; k++)
            {
                temp[k] += res[j] / 6.0;
            }
        }

        res = temp;
    }

    return res;
}
