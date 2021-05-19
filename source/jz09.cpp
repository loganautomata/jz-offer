#include "jz09.h"

using namespace std;

Jz09::Jz09()
{
}

void Jz09::appendTail(int value)
{
    in.push(value);
}

int Jz09::deleteHead()
{
    // 判断出栈是否为空, 若为空, 先从入栈放入数据到出栈.
    if (out.empty())
    {
        while (!in.empty())
        {
            out.push(in.top());
            in.pop();
        }
    }

    // 如果两个栈都为空则返回-1, 防止删除出栈顶端数据然后返回该数据.
    if (out.empty())
    {
        return -1;
    }
    else
    {
        int top = out.top();
        out.pop();
        return top;
    }
}
