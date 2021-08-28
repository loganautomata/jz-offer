#include "jz58_1.h"

using namespace std;

string Jz58_1::reverseWords(string s)
{
    s += ' '; // 字符串后加入空格, 避免最后一个单词被遗漏.
    vector<string> words; // 存储字符串中所有的单词.
    string word; // 暂存单词
    string res; // 逆序句子

    // 将所有单词存储于动态数组中.
    for (char &ch : s)
    {
        if (ch == ' ')
        {
            if (!word.empty()) words.push_back(word);
            word.clear();
        }
        else if (ch != ' ') word += ch;
    }

    // 将动态数组中的单词逆序输出.
    for (vector<string>::reverse_iterator i = words.rbegin(); i < words.rend(); i++)
    {
        res += *i;
        if (i < words.rend() - 1) res += ' ';
    }

    return res;
}
