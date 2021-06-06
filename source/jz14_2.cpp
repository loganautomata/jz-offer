#include "jz14_2.h"

using namespace std;

long Jz14_2::pow_3(int num)
{
    long res = 1;

    for (int i = 0; i < num/3; i++)
    {
        res *= 3;
        res %= 1000000007;
    }

    return res;
}

int Jz14_2::cuttingRope(int n)
{
    long res = 0;

    // 为满足m>1的条件, 排除特殊情况.
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;

    // 当每段绳子长度为3时乘积最大.
    if (n % 3 == 0)
        res = pow_3(n);
    else if (n % 3 == 1)
        res = (pow_3(n - 4) * 4) % 1000000007;
    else
        res = (pow_3(n - 2) * 2) % 1000000007;

    return res;
}
