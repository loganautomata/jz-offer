#include "jz04.h"

using namespace std;

// bool Jz04::findNumberIn2DArray(vector<vector<int>> &matrix, int target)
// {
//     if (matrix.size() == 0) return 0;     //矩阵为空的特殊情况

//     int y_length = matrix.size();    //遍历列时最大的长度

//     int x_length = matrix[0].size(); //遍历行时最大的长度

//     for (int i = 0; i < x_length && i < y_length; i++)
//     {
//         //行遍历
//         for (int j = i; j < x_length; j++)
//         {
//             if (matrix[i][j] == target) return true;
//             else if (matrix[i][j] > target) x_length = j;
//         }

//         //列遍历
//         for (int j = i + 1; j < y_length; j++)
//         {
//             if (matrix[j][i] == target) return true;
//             else if (matrix[j][i] > target) y_length = j;
//         }
//     }

//     return false;
// }

bool Jz04::findNumberIn2DArray(vector<vector<int>>& matrix, int target)
{
    if(matrix.size() == 0) return false; // 矩阵为空时

    // 从右上角开始判断, 找到目标则返回, 如果大于目标则左移, 小于目标则下移.
    for(int i = 0, j = matrix[0].size() - 1; i < (int)matrix.size() && j > -1;)
    {
        if (matrix[i][j] == target) return true;
        else if (matrix[i][j] > target) j--;
        else i++;
    }

    return false;
}
