#ifndef JZ09_H
#define JZ09_H

#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

class Jz09
{
private:
    stack<int> in; // 模拟进入队列的栈
    stack<int> out; // 模拟出队列的栈

public:
    Jz09();
    void appendTail(int value);
    int deleteHead();
};

#endif