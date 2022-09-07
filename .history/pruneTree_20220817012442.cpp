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


TreeNode* recur_pruneTree(TreeNode *root){
    if(! root) return ;
    if(root->val == 1){
        return root;
    }else{
        recur_pruneTree(root->left);
        recur_pruneTree(root->right);
    }
    return nullptr;
}


TreeNode* pruneTree(TreeNode* root) {
    recur_pruneTree(root);
    return root;
}
