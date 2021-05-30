#ifndef JZ13_H
#define JZ13_H

#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;

class Jz13
{
private:
    int getSum(int num);

public:
    int movingCount(int m, int n, int k);
};

#endif