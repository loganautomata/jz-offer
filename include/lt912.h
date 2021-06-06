#ifndef LT912_H
#define LT912_H

#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class LT912
{
private:
    void QuickSort(vector<int>& nums, pair<int, int> range);
public:
    vector<int> sortArray(vector<int>& nums);
};

#endif