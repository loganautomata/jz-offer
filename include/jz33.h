#ifndef JZ33_H
#define JZ33_H

#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class Jz33
{
private:
    bool dfs(vector<int>& postorder, pair<int, int> range);
public:
    bool verifyPostorder(vector<int>& postorder);
};

#endif