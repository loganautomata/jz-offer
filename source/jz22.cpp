#include "jz22.h"

using namespace std;

ListNode* Jz22::getKthFromEnd(ListNode* head, int k)
{
    int distance = 1;
    ListNode *res = head;

    for (ListNode *node = head; node->next != nullptr; node = node->next, distance++)
    {
        if (distance >= k) res = res->next;
    }

    if (distance < k) res = nullptr; // 链表短于k
    
    return res;
}
