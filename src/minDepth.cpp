#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include"data_structure.h"
using namespace std;

int minDepth(TreeNode* root) {
    queue<TreeNode *> q;
    set<int> st;
    st.insert(root->val);
    q.push(root);
    queue<TreeNode *> qq;
    int depth = 0;
    while (q.size()) {
        TreeNode *cur = q.front();
        q.pop();
        if (cur->left) {
            qq.push(cur->left);
        }
        if (cur->right) {
            qq.push(cur->right);
        }
        if (!cur->left && !cur->right) {
            return depth;
        }
        if (q.empty() && qq.size()) {
            q = qq;
            while (qq.size()) qq.pop();
            depth++;
        }
    }
    return depth;
}