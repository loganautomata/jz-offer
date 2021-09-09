#include "jz41.h"

using namespace std;

Jz41::Jz41()
{
}

void Jz41::addNum(int num)
{
    if (low.empty())
        low.push(num);
    else if (high.empty())
    {
        if (num < low.top())
        {
            high.push(low.top());
            low.pop();
            low.push(num);
        }
        else
            high.push(num);
    }
    else
    {
        if (num > high.top()) high.push(num);
        else low.push(num);
    }

    while (abs((int)(low.size() - high.size())) > 1)
    {
        if (low.size() > high.size())
        {
            high.push(low.top());
            low.pop();            
        }
        else
        {
            low.push(high.top());
            high.pop();
        }
    }
}

double Jz41::findMedian()
{
    double res = 0;

    if (low.size() > high.size())
    {
        res = (double)low.top();
    }
    else if (low.size() < high.size())
    {
        res = (double)high.top();
    }
    else
    {
        res = ((double)low.top() + (double)high.top()) / 2;
    }

    return res;
}
