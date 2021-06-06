#include "jz18.h"

using namespace std;

ListNode* Jz18::deleteNode(ListNode* head, int val)
{
    // 头节点为所要删除的节点
    if (head->val == val)
    {
        ListNode *temp = head;
        head = head->next;
        temp->next = nullptr;
        return head;
    }

    // 循环查找需要删除的节点
    for (ListNode *node = head, *pre = head; node != nullptr; pre = node, node = node->next)
    {
        if (node->val == val)
        {
            pre->next = node->next;
            node->next = nullptr;
            break;
        }
    }

    return head;
}
