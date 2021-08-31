#include "jz66.h"

using namespace std;

vector<int> Jz66::constructArr(vector<int> &a)
{
    vector<int> pre(a.size(), 1);
    vector<int> aft(a.size(), 1);
    vector<int> res(a.size(), 0);

    for (int i = 1; i < a.size(); i++)
    {
        pre[i] = pre[i - 1] * a[i - 1];
    }
    for (int i = a.size() - 2; i >= 0; i--)
    {
        aft[i] = aft[i + 1] * a[i + 1];
    }
    for (int i = 0; i < res.size(); i++)
    {
        res[i] = pre[i] * aft[i];
    }

    return res;
}
