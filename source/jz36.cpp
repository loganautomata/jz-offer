#include "jz36.h"

using namespace std;

void Jz36::dfs(Node *cur)
{
    if (cur == nullptr)
        return;

    dfs(cur->left);

    if (head == nullptr)
    {
        head = cur;
        pre = cur;
    }
    else
    {
        pre->right = cur;
        cur->left = pre;
        pre = cur;
    }

    dfs(cur->right);

    return;
}

Node *Jz36::treeToDoublyList(Node *root)
{
    if (root == nullptr)
        return nullptr;

    dfs(root);

    // 首尾相连
    head->left = pre;
    pre->right = head;

    return head;
}
