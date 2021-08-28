#ifndef JZ47_H
#define JZ47_H

#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class Jz47
{
private:
    int MaxSum(vector<vector<int>>& grid, int col, int row);
public:
    int maxValue(vector<vector<int>>& grid);
};

#endif