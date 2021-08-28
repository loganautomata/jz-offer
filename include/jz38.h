#ifndef JZ38_H
#define JZ38_H

#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Jz38
{
private:
    set<string> str_set;
    void dfs(string str, multiset<char> ch_set);

public:
    vector<string> permutation(string s);
};

#endif