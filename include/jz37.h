#ifndef JZ37_H
#define JZ37_H

#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <queue>
#include "TreeNode.h"

using namespace std;

class Jz37
{
private:
public:
    string serialize(TreeNode *root);
    TreeNode *deserialize(string data);
};

#endif