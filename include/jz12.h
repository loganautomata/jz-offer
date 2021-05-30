#ifndef JZ12_H
#define JZ12_H

#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Jz12
{
private:
    bool dfs(const vector<vector<char>> &board, const string &word, vector<vector<bool>> &path, string::iterator ch, int i, int j);

public:
    bool exist(vector<vector<char>> &board, string word);
};

#endif