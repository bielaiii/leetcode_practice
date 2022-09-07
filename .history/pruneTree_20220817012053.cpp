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

void recur_pruneTree(TreeNode *root){
    if(! root) return ;
    if(root->left && root->left->val == 0) root->left = nullptr;
    if(root->right && root->right->val == 0) root->right = nullptr;
    recur_pruneTree(root->left);
    recur_pruneTree(root->right);
}


TreeNode* pruneTree(TreeNode* root) {
    recur_pruneTree(root);
    return root;
}
