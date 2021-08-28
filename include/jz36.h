#ifndef JZ36_H
#define JZ36_H

#include <algorithm>
#include <vector>
#include <string>
#include "Node.h"

using namespace std;

class Jz36
{
private:
    Node *head = nullptr;
    Node *pre = nullptr;
    void dfs(Node *cur); // 中序遍历

public:
    Node *treeToDoublyList(Node *root);
};

#endif