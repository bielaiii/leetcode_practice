#include<iostream>
#include<vector>
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

bool rec(TreeNode* root, int const val){
    if(! root) return 1;
    if(root->val != val) return 0;
    return rec(root->left, val) && rec(root->right, val);
}


bool isUnivalTree(TreeNode* root) {
  //  int val = root->val;
    return rec(root,root->val);
}
