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
/* 
TreeNode* pruneTree(TreeNode* root) {
    if( !root) return root;
    root->left = pruneTree(root->left);
    root->right = pruneTree(root->right);
    return root->val == 0 && root->left == nullptr && root->right == nullptr? nullptr : root;;
}
 */