#include "jz35.h"

using namespace std;

Node *Jz35::copyRandomList(Node *head)
{
    unordered_map<Node *, Node *> node_map; // 存储新旧指针映射的hash表.

    // 建立原链表节点指向新链表节点的映射.
    for (Node *node = head; node != nullptr; node = node->next)
    {
        Node *new_node = new Node(node->val);
        node_map.insert({node, new_node});
    }

    // 复制链表
    for (Node *node = head; node != nullptr; node = node->next)
    {
        node_map[node]->next = node_map[node->next];
        node_map[node]->random = node_map[node->random];
    }

    return node_map[head];
}
