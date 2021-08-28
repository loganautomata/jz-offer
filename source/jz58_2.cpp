#include "jz58_2.h"

using namespace std;

string Jz58_2::reverseLeftWords(string s, int n)
{
    string res = ""; // 存储旋转后的字符串.

    if (n > s.size()) return s; // n超过字符串长度, 直接返回改字符串.

    res.append(s.begin() + n, s.end());
    res.append(s.begin(), s.begin() + n);

    return res;
}
