#include "jz06.h"

using namespace std;

vector<int> Jz06::reversePrint(ListNode* head)
{
    vector<int> result;

    // 将链表中所有数放入动态数组
    for (ListNode* node = head; node != NULL; node = node->next)
    {
        result.push_back(node->val);
    }
    reverse(result.begin(), result.end()); // 反转动态数组

    return result;

    stack<int> s;
}

// vector<int> Jz06::reversePrint(ListNode *head)
// {
//     vector<int> result;

//     // 通过迭代将数据以倒序的方式插入数组
//     if (!pushVal(head, result))
//         return result;
//     else
//         throw "reverse failed";
// }

// int Jz06::pushVal(ListNode *node, vector<int>& arr)
// {
//     if (node == NULL) // 迭代终止
//         return 0;
//     if (!pushVal(node->next, arr)) // 迭代返回值正常
//     {
//         arr.push_back(node->val);
//         return 0;
//     }
//     else
//         return -1;
// }

// vector<int> Jz06::reversePrint(ListNode *head)
// {
//     vector<int> result;
//     stack<int> tmp_s;

//     // 将链表入栈
//     for (ListNode *node = head; node != NULL; node = node->next)
//     {
//         tmp_s.push(node->val);
//     }

//     // 数据出栈置入动态数组
//     for (; !tmp_s.empty(); tmp_s.pop())
//     {
//         result.push_back(tmp_s.top());
//     }

//     return result;
// }
