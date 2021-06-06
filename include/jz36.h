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
    Node *head;
    void dfs(Node *pre, Node *node);

public:
    Node *treeToDoublyList(Node *root);
};

#endif