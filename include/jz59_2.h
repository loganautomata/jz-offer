#ifndef JZ59_2_H
#define JZ59_2_H

#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;

class Jz59_2
{
private:
    queue<int> que; // 存储数字的队列
    deque<int> deq; // 存储最大数字的递减队列
public:
    Jz59_2();
    int max_value();
    void push_back(int value);
    int pop_front();
};

#endif