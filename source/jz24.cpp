#include "jz24.h"

using namespace std;

ListNode* Jz24::reverseList(ListNode *head)
{
    for (ListNode *node = head, *pre = nullptr; node != nullptr; )
    {
        ListNode *temp = node;
        node = node->next;
        temp->next = pre;
        pre = temp;
        if (node == nullptr) head = pre;
    }

    return head;
}
