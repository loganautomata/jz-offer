#include "jz43.h"

using namespace std;

int Jz43::countDigitOne(int n)
{
    string num = to_string(n);
    int res = 0;

    for (int i = 0; i < num.size(); i++)
    {
        string temp_sub_pre = "";
        string temp_sub_aft = "";

        if (i > 0)
            temp_sub_pre = num.substr(0, i);
        if (i + 1 < num.size())
            temp_sub_aft = num.substr(i + 1);

        if (num[i] > '1')
        {
            temp_sub_aft.assign(num.size() - i - 1, '9');
        }
        else if (num[i] < '1')
        {
            temp_sub_pre = to_string(stoi(temp_sub_pre) - 1);
            temp_sub_aft.assign(num.size() - i - 1, '9');
        }

        if (temp_sub_pre.size() + temp_sub_aft.size() > 0)
            res += stoi(temp_sub_pre + temp_sub_aft);

        res += 1;
    }

    return res;
}
