#include "jz25.h"

using namespace std;

ListNode* Jz25::mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode *head = new ListNode(0);

    for (ListNode *node1 = l1, *node2 = l2, *node = head; node1 != nullptr || node2 != nullptr;)
    {
        if (node2 == nullptr)
        {
            node->next = node1;
            node = node->next;
            node1 = nullptr;
        }
        else if (node1 == nullptr)
        {
            node->next = node2;
            node = node->next;
            node2 = nullptr;
        }
        else if (node1->val <= node2->val)
        {
            node->next = node1;
            node = node->next;
            node1 = node1->next;
        }
        else if (node1->val > node2->val)
        {
            node->next = node2;
            node = node->next;
            node2 = node2->next;
        }
    }

    ListNode *res = head->next;
    delete head;

    return res;
}
