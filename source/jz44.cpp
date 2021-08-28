#include "jz44.h"

using namespace std;

int Jz44::findNthDigit(int n)
{
    string num_str = "";
    int num_bits = 1;
    int num = 0;
    string res_str = "";
    int res = 0;

    while (n > (pow(10, num_bits) - pow(10, num_bits - 1)) * num_bits)
    {
        n -= (pow(10, num_bits) - pow(10, num_bits - 1)) * num_bits;
        num_bits++;
    }

    num = pow(10, num_bits - 1) + n / num_bits - 1;
    if (n % num_bits != 0)
        num++;

    num_str = to_string(num);
    if (n % num_bits == 0)
        res_str.append(num_str.end() - 1, num_str.end());
    else
        res_str.append(num_str.begin() + n % num_bits - 1, num_str.begin() + n % num_bits);
    res = stoi(res_str);

    return res;
}
