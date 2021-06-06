#include "jz16.h"

using namespace std;

double Jz16::myPow(double x, int n)
{
    vector<pair<int, double>> pows{ make_pair(0, 1)}; // 存储所有的计算结果

    // 求x的n次幂
    for (unsigned int i = 0, fac_num = 0; i < abs(n);)
    {
        for (; fac_num >= 0;)
        {
            if (i + pows[fac_num].first <= abs(n))
            {
                if (i)
                {
                    i += pows[fac_num].first;
                    pows.push_back(make_pair(i, pows[fac_num].second * pows.back().second));
                }
                else
                {
                    i = 1;
                    pows.push_back(make_pair(i, x));
                } // i=0 时初始化.
                
                if (i + pows.back().first <= abs(n))
                    fac_num = pows.size() - 1;
                break;
            }
            else{
                fac_num--;
            }
        }
    }

    if (n < 0)
        return 1 / pows.back().second;

    return pows.back().second;
}
