#include "jz30.h"

using namespace std;

Jz30::Jz30()
{

}

void Jz30::push(int x)
{
    stack_num.push(x); // 将数入栈

    if(stack_min.empty() || stack_min.top() > x) stack_min.push(x);
    else stack_min.push(stack_min.top()); // 将当前最小值放入存储最小值的栈.
}

void Jz30::pop()
{
    stack_num.pop();
    stack_min.pop();
}

int Jz30::top()
{
    return stack_num.top();
}

int Jz30::min()
{
    return stack_min.top();
}



