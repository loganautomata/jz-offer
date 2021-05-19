#ifndef JZ06_H
#define JZ06_H

#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include"LinstNode.h"

using namespace std;

class Jz06
{
private:
    int pushVal (ListNode* node, vector<int>& arr);
public:
    vector<int> reversePrint(ListNode* head);
};

#endif