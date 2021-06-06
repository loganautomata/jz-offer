#include "jz17.h"

using namespace std;

vector<int> Jz17::printNumbers(int n)
{
    vector<int> res;

    for (int i = 0; i < pow(10, n); i++)
        res.push_back(i);

    return res;
}
