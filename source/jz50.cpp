#include "jz50.h"

using namespace std;

char Jz50::firstUniqChar(string s)
{
    unordered_set<char> ch_in_s;
    unordered_map<char, int> ch_once;
    pair<char, int> ch_first;

    for (int i = 0; i < s.size(); i++)
    {
        if (ch_in_s.find(s[i]) == ch_in_s.end())
        {
            ch_in_s.insert(s[i]);
            ch_once.emplace(s[i], i);
        }
        else
        {
            if (ch_once.find(s[i]) != ch_once.end()) ch_once.erase(s[i]);
        }
    }

    if (ch_once.empty()) return ' ';
    else ch_first = *ch_once.begin();

    for (auto& ch : ch_once)
    {
        if (ch_first.second > ch.second) ch_first = ch;
    }

    return ch_first.first;
}
