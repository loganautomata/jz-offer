#ifndef JZ30_H
#define JZ30_H

#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

class Jz30
{
private:
    stack<int> stack_num; // 用来存储数据的栈.
    stack<int> stack_min; // 用来存储最小值的栈.

public:
    Jz30();
    void push(int x);
    void pop();
    int top();
    int min();
};

#endif