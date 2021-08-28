#include "jz59_2.h"

using namespace std;

Jz59_2::Jz59_2()
{
}

int Jz59_2::pop_front()
{
    int front = 0;
    if (que.empty())
        return -1;
    else
        front = que.front();
    que.pop();
    if (deq.front() == front)
        deq.pop_front();

    return front;
}

void Jz59_2::push_back(int value)
{
    for (; !deq.empty() && deq.back() < value; deq.pop_back())
    {
    }
    deq.push_back(value);
    que.push(value);
}

int Jz59_2::max_value()
{
    if (que.empty())
        return -1;
    else
        return deq.front();
}
