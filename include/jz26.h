#ifndef JZ26_H
#define JZ26_H

#include <algorithm>
#include <vector>
#include <string>
#include "TreeNode.h"

using namespace std;

class Jz26
{
private:
    bool CompareTrees(TreeNode *A, TreeNode *B);

public:
    bool isSubStructure(TreeNode *A, TreeNode *B);
};

#endif