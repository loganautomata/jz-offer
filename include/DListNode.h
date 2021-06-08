#include <stdio.h>

using namespace std;

struct DListNode
{
    int key, val;
    DListNode *pre;
    DListNode *next;
    DListNode(int k, int v) : key(k), val(v), pre(nullptr), next(nullptr){};
};