#include "jz12.h"

using namespace std;

bool Jz12::dfs(const vector<vector<char>> &board, const string &word, vector<vector<bool>> &path, string::iterator ch, int i, int j)
{
    if (ch == word.end())
        return true; // 迭代终止条件

    bool res = false; // 字符是否相等的判断结果

    // direction 0, 1, 2, 3 对应 上, 右, 下, 左 不可移动. -1代表4个方向皆可.

    // 判断是否可以向上走
    if (i - 1 < 0 || path[i - 1][j] || board[i - 1][j] != *ch)
        ;
    else
    {
        path[i - 1][j] = true;
        res = dfs(board, word, path, ch + 1, i - 1, j);
    };

    // 判断是否可以向右走
    if (res || j + 1 >= board[0].size() || path[i][j + 1] || board[i][j + 1] != *ch)
        ;
    else
    {
        path[i][j + 1] = true;
        res = dfs(board, word, path, ch + 1, i, j + 1);
    };

    // 判断是否可以向下走
    if (res || i + 1 >= board.size() || path[i + 1][j] || board[i + 1][j] != *ch)
        ;
    else
    {
        path[i + 1][j] = true;
        res = dfs(board, word, path, ch + 1, i + 1, j);
    };

    // 判断是否可以向左走
    if (res || j - 1 < 0 || path[i][j - 1] || board[i][j - 1] != *ch)
        ;
    else
    {
        path[i][j - 1] = true;
        res = dfs(board, word, path, ch + 1, i, j - 1);
    }

    // 回退
    path[i][j] = 0;

    return res;
}

bool Jz12::exist(vector<vector<char>> &board, string word)
{
    if (word.empty())
        return true; // 排除字符串为空的特殊情况

    vector<vector<bool>> path(board.size(), vector<bool>(board[0].size())); // 已走过的路径

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            path[i][j] = false;
        }
    }

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            path[i][j] = true;
            if (board[i][j] == word[0] && dfs(board, word, path, word.begin() + 1, i, j))
                return true;
            path[i][j] = false;
        }
    }

    return false;
}
