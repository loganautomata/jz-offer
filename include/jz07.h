#ifndef JZ07_H
#define JZ07_H

#include<algorithm>
#include<vector>
#include<string>
#include<unordered_map>
#include<memory>
#include"TreeNode.h"

using namespace std;

class Jz07
{
private:
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
};

#endif