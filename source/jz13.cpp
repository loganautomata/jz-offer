#include "jz13.h"

using namespace std;

int Jz13::getSum(int num)
{
    int res = 0;

    // 求数位之和
    for (; num; num /= 10)
    {
        res += num % 10;
    }

    return res;
}

int Jz13::movingCount(int m, int n, int k)
{
    int count = 0;
    queue<pair<int, int>> q;                       // 存储点坐标的队列
    vector<vector<int>> mat(m, vector<int>(n, 1)); // 存储点的矩阵

    q.push(make_pair(0, 0)); // 起点入队列
    mat[0][0] = 0;
    count++;

    for (; !q.empty();)
    {
        // 取出队列前端的第一个数
        pair<int, int> dot = q.front();
        q.pop();

        // 向下走
        if (dot.first + 1 < m && mat[dot.first + 1][dot.second] && getSum(dot.first + 1) + getSum(dot.second) <= k)
        {
            q.push(make_pair(dot.first + 1, dot.second)); // 下方点入队列
            mat[dot.first + 1][dot.second] = 0;
            count++;
        }

        // 向右走
        if (dot.second + 1 < n && mat[dot.first][dot.second + 1] && getSum(dot.first) + getSum(dot.second + 1) <= k)
        {
            q.push(make_pair(dot.first, dot.second + 1)); // 右方点入队列
            mat[dot.first][dot.second + 1] = 0;
            count++;
        }
    }

    return count;
}
