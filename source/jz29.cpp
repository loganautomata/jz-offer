#include "jz29.h"

using namespace std;

vector<int> Jz29::spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> res;

    if (!matrix.size() || !matrix[0].size()) return res; // 排除空矩阵

    // 用矩阵左上角和右下角的点来确定矩阵, 通过不断缩小两个点的坐标来缩小矩阵.
    for(pair<int, int> north_west(0, 0), south_east(matrix.size()-1, matrix[0].size()-1); south_east.first >= north_west.first && south_east.second >= north_west.second; north_west.first++, north_west.second++, south_east.first--, south_east.second--)
    {
        // 最上面的一行
        for (int j = north_west.second; j < south_east.second + 1; j++)
        {
            res.push_back(matrix[north_west.first][j]);
        }

        // 最右侧的一列
        for (int i = north_west.first + 1; i < south_east.first; i++)
        {
            res.push_back(matrix[i][south_east.second]);
        }

        // 最下面的一行, 当矩阵只有一行时, 增加判断西北, 东南角纵坐标, 防止重复输出.
        for (int j = south_east.second; j > north_west.first - 1 && north_west.first != south_east.first; j--)
        {
            res.push_back(matrix[south_east.first][j]);
        }

        // 最左侧的一列, 当矩阵只有一列时, 增加判断西北, 东南角横坐标, 防止重复输出.
        for (int i = south_east.first - 1; i > north_west.first && north_west.second != south_east.second; i--)
        {
            res.push_back(matrix[i][north_west.second]);
        }
    }

    return res;
}
