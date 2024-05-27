#include "data_structure.h"
#include "header.h"
#include <iostream>
#include <vector>
using namespace std;
static vector<int> walkThrough(ListNode* head) {
    vector<int> ans;
    while (head) {
        ans.push_back(head->val);
        head = head->next;
    }
    return ans;
}

static bool PreOrder(TreeNode* root, vector<int> &vt, int idx) {
    
    if (idx == vt.size()) {
        return true;
    }
    if (!root) {
        return false ;
    }
    if (root->val == vt[idx]) {
        idx++;
    } else {
        return false;
    } 
    
    return PreOrder(root->left, vt, idx) || PreOrder(root->right, vt, idx);
}
bool isSubPath(ListNode* head, TreeNode* root) {
    if(!root) return false;
    vector<int> ans = walkThrough(head);
    return PreOrder(root, ans, 0) || isSubPath(head, root->left) || isSubPath(head, root->right);
}