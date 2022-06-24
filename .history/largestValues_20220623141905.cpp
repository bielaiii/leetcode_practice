#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/* vector<int> largestValues(TreeNode* root) {
    if(! root) return {};
    queue<TreeNode *> qu;
    queue<TreeNode *> que;
    vector<int> ans;
    que.push(root);
    while(! que.empty()){
        int find = INT32_MIN;
        vector<int> store;
        qu = que;
        while(! que.empty()) que.pop();
        while(! qu.empty()){
            TreeNode * temp = qu.front();
            store.push_back(temp->val);
            qu.pop();
            if(temp->left)que.push(temp->left);
            if(temp->right)que.push(temp->right);
        }
        for(auto i : store){
            find = max(find, i);
        }
        store.clear();
        ans.push_back(find);
        find = INT32_MIN;
    }
    return ans;
}
 */