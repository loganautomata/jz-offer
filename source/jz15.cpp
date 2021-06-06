#include "jz15.h"

using namespace std;

int Jz15::hammingWeight(uint32_t n)
{
    int count = 0;

    // 循环判断每一位数是否为1
    for (uint32_t bin = 1; n; n >>= 1)
    {
        count += bin & n;
    }
    
    return count;
}
