#include "jz05.h"

using namespace std;

string Jz05::replaceSpace(string s)
{
    string s_r = "%20";

    for (string::iterator i = s.begin(); i < s.end(); i++)
    {
        if (*i == ' ')
        {
            i = s.erase(i);                          // 删除i所指的元素且i指向改为删除的元素的后一位元素.
            i = s.insert(i, s_r.begin(), s_r.end()); // 在i指向的元素前插入字符串.
        }
    }

    return s;
}
