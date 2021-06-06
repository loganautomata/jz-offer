#include "jz31.h"

using namespace std;

bool Jz31::validateStackSequences(vector<int>& pushed, vector<int>& popped)
{
    stack<int> stack_check;

    // 检测该出栈序列能否正常出栈, 根据入栈和出栈序列推出数入栈和出栈的过程
    for(unsigned int push_i = 0, pop_i = 0; pop_i < popped.size() && (push_i < pushed.size() || stack_check.top() == popped[pop_i]);)
    {
        if(push_i < pushed.size())
        {
            stack_check.push(pushed[push_i]);
            push_i++;
        } // 数入栈

        while (!stack_check.empty() && pop_i < popped.size() && popped[pop_i] == stack_check.top())
        {
            stack_check.pop();
            pop_i++;
        } // 数出栈
    }

    if (stack_check.empty()) return true;

    return false;
}
