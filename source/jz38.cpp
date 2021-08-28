#include "jz38.h"

using namespace std;

void Jz38::dfs(string str, multiset<char> ch_set)
{
    if (ch_set.empty())
    {
        str_set.insert(str);
        return;
    }

    for (char ch : ch_set)
    {
        multiset<char> new_set(ch_set);
        new_set.erase(new_set.find(ch));
        dfs(str + ch, new_set);
    }

    return;
}

vector<string> Jz38::permutation(string s)
{
    vector<string> res;
    multiset<char> ch_set;
    for (char ch : s)
    {
        ch_set.insert(ch);
    }

    dfs("", ch_set);
    for (string str : str_set)
    {
        res.push_back(str);
    }

    return res;
}
