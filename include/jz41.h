#ifndef JZ41_H
#define JZ41_H

#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <cmath>

using namespace std;

class Jz41
{
private:
    priority_queue<int, vector<int>, less<int>> low;
    priority_queue<int, vector<int>, greater<int>> high;

public:
    Jz41();
    void addNum(int num);
    double findMedian();
};

#endif