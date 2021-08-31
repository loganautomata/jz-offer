#include "jz64.h"

using namespace std;

int Jz64::sumNums(int n)
{
    bool judge = n && (n += sumNums(n-1));

    return n;
}
