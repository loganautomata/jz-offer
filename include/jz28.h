#ifndef JZ28_H
#define JZ28_H

#include<algorithm>
#include<vector>
#include<string>
#include"TreeNode.h"

using namespace std;

class Jz28
{
private:
    bool IsMirror(TreeNode* left, TreeNode* right);
public:
    bool isSymmetric(TreeNode* root);
};

#endif