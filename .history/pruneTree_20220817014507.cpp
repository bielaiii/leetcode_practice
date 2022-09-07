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
    if(! root) return nullptr ;
    if(root->val == 1){
        return root;
    }else{
        recur_pruneTree(root->left);
        recur_pruneTree(root->right);
    }
    return root;
}

void traversal_pruneTree(TreeNode * root){
    if(root == nullptr) return ;
    if(root->val == 0){
        TreeNode * temp_left = recur_pruneTree(root->left);
        TreeNode * temp_right = recur_pruneTree(root->right);
        if(temp_left  == nullptr)  root->left = nullptr;
        if(temp_right == nullptr) root->right = nullptr;
        traversal_pruneTree(temp_left);
        traversal_pruneTree(temp_right);
    }else{
        traversal_pruneTree(root->left);
        traversal_pruneTree(root->right);
    }
}

TreeNode* pruneTree(TreeNode* root) {
    traversal_pruneTree(root);
    return root;
}
