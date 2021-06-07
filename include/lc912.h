#ifndef LC912_H
#define LC912_H

#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class LC912
{
private:
    void QuickSort(vector<int>& nums, pair<int, int> range); // range 是要分治排序的区间, 该区间左开右闭.
public:
    vector<int> sortArray(vector<int>& nums);
};

#endif