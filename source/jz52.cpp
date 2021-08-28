#include "jz52.h"

using namespace std;

// ListNode *Jz52::getIntersectionNode(ListNode *headA, ListNode *headB)
// {
//     for (; headA != nullptr; headA = headA->next)
//     {
//         for (; headB != nullptr; headB = headB->next)
//         {
//             if (headA == headB) return headA;  
//         }
//     }

//     return nullptr;
// }

ListNode *Jz52::getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *a = headA;
    ListNode *b = headB;

    while (a != b)
    {
        if (a == nullptr) a = headB;
        else a = a->next;
        if (b == nullptr) b = headA;
        else b = b->next;
    }
    
    return a;
}
