#ifndef JZ40_H
#define JZ40_H

#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class Jz40
{
private:
    void QuickSort(vector<int> &arr, int left, int right, int k);
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k);
};

#endif