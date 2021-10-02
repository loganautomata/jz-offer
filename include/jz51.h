#ifndef JZ51_H
#define JZ51_H

#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Jz51
{
private:
    int MergeArr(vector<vector<int>> &arr, vector<vector<int> > &arr_temp, int num);
public:
    int reversePairs(vector<int> &nums);
};

#endif