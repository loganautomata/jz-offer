#ifndef JZ60_H
#define JZ60_H

#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Jz60
{
private:
    void dfs(int n, int sum, int &counts, map<int, int, greater<int>> &num_count);

public:
    vector<double> dicesProbability(int n);
};

#endif