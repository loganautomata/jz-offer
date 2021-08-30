#include "jz63.h"

using namespace std;

int Jz63::maxProfit(vector<int>& prices)
{
    int res = 0;

    if (prices.empty()) return res;

    int min = prices.front();
    for (auto &price : prices)
    {
        if (price < min) min = price;
        if (price - min > res) res = price - min;
    }

    return res;
}
