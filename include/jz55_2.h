#ifndef JZ55_2_H
#define JZ55_2_H

#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include "TreeNode.h"

using namespace std;

class Jz55_2
{
private:
    int maxDepth(TreeNode* root);
public:
    bool isBalanced(TreeNode* root);
};

#endif