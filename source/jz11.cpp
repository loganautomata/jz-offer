#include "jz11.h"

using namespace std;

int Jz11::minArray(vector<int> &numbers)
{
    int min = numbers[0]; // 最小值, 排除numbers只有一个值时的特殊情况.

    // 使用二分法寻找最小值
    for (vector<int>::iterator left = numbers.begin(), right = numbers.end() - 1, middle; left < right;)
    {
        middle = left + distance(left, right) / 2;
        if (*middle == *right)
            right--;
        else if (*middle > *right)
            left = middle + 1;
        else
            right = middle;

        if (left >= right)
            min = *left;
    }

    return min;
}
