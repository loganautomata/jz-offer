#include "jz36.h"

using namespace std;

void Jz36::dfs(Node *pre, Node *node)
{
    if (node == nullptr)
        return; // 迭代终止条件.

    dfs(node, node->left); // 中序遍历
    Node *next = node->right;
    if (head == nullptr && node->left == nullptr) head = node; // 确定头节点
    else
    {
        pre->right = node;
        node->left = pre;
    } // 建立节点的双向连接
    dfs(node, next);
}

Node *Jz36::treeToDoublyList(Node *root)
{
    dfs(nullptr, root);

    // 构造首尾节点循环
    for (Node *i = head; i != nullptr; i = i->right)
    {
        if (i->right == nullptr)
        {
            i->right == head;
            head->left = i;
        }
    }

    return head;
}
