#include "jz37.h"

using namespace std;

string Jz37::serialize(TreeNode *root)
{
    queue<TreeNode *> q;
    string res = "";

    if (root != nullptr)
    {
        q.push(root);
        res += to_string(root->val) += " ";
    }

    for (; !q.empty(); q.pop())
    {
        TreeNode *cur = q.front();
        if (cur->left != nullptr)
        {
            res += to_string(cur->left->val) += " ";
            q.push(cur->left);
        }
        else
            res += to_string(INT64_MIN) += " ";
        if (cur->right != nullptr)
        {
            res += to_string(cur->right->val) += " ";
            q.push(cur->right);
        }
        else
            res += to_string(INT64_MIN) += " ";
    }

    return res;
}

TreeNode *Jz37::deserialize(string data)
{
    stringstream strstream;
    strstream.str(data);
    queue<long> nums;
    queue<TreeNode *> q;
    TreeNode *res = nullptr;

    for (long num = 0; strstream >> num;)
        nums.push(num);

    if (!nums.empty())
    {
        res = new TreeNode(nums.front());
        q.push(res);
        nums.pop();
    }

    while (!nums.empty())
    {
        TreeNode *left = nullptr;
        TreeNode *right = nullptr;
        if (nums.front() != INT64_MIN) left = new TreeNode(nums.front());
        nums.pop();
        if (nums.front() != INT64_MIN) right = new TreeNode(nums.front());
        nums.pop();
        TreeNode *cur = q.front();
        q.pop();
        if (left != nullptr) q.push(left);
        if (right != nullptr) q.push(right);

        cur->left = left;
        cur->right = right;
    }

    return res;
}
