#include "jz62.h"

using namespace std;

// int Jz62::lastRemaining(int n, int m)
// {
//     vector<int> nums_circle(n, 0);
//     int count = m - 1;

//     for (int i = 0; i < nums_circle.size(); i++)
//         nums_circle[i] = i;

//     for (auto num_it = nums_circle.begin(); nums_circle.size() > 1; count--)
//     {
//         if (num_it == nums_circle.end())
//             num_it = nums_circle.begin();

//         if (count == 0)
//         {
//             if (num_it + 1 == nums_circle.end())
//             {
//                 nums_circle.erase(num_it);
//                 num_it = nums_circle.begin();
//             }
//             else
//                 num_it = nums_circle.erase(num_it);
//             count = m;
//         }
//         else
//             num_it++;
//     }

//     return nums_circle.front();
// }

int Jz62::lastRemaining(int n, int m)
{
    int res = 0;

    // f(i) = (f(i-1) + m) % i
    for (int i = 2; i <= n; i++)
    {
        res = (res + m) % i;
    }

    return res;
}
