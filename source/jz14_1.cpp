#include "jz14_1.h"

using namespace std;

int Jz14_1::cuttingRope(int n)
{
    int res = 0;

    // 当每段绳子长度为3时乘积最大.
    if (n % 3 == 0)
        res = pow(3, n / 3);
    else if (n % 3 == 1)
        res = pow(3, (n - 4) / 3) * 4;
    else
        res = pow(3, (n - 2) / 3) * 2;

    // 为满足m>1的条件, 排除特殊情况
    if (n == 2)
        res = 1;
    if (n == 3)
        res = 2;

    return res;
}