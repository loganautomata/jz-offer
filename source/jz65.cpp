#include "jz65.h"

using namespace std;

int Jz65::add(int a, int b)
{
    while (b != 0)
    {
        int temp = a;
        a = a ^ b;
        b = (unsigned int)(temp & b) << 1;
    }

    return a;
}
