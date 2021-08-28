#ifndef JZ45_H
#define JZ45_H

#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;

struct compare_str
{
    bool operator()(const string &str1, const string &str2) const
    {
        bool res = false;

        for (int i = 0, j = 0; i < str1.size() && j < str2.size(); i++, j++)
        {
            if (str1[i] == str2[j])
            {
                if (i == str1.size() - 1 && j < str2.size() - 1)
                    i = -1;
                else if (i < str1.size() - 1 && j == str2.size() - 1)
                    j = -1;
                else
                    continue;
            }
            else
            {
                res = str1[i] > str2[j];
                break;
            }
        }

        return res;
    }
};

class Jz45
{
private:
public:
    string minNumber(vector<int> &nums);
};

#endif