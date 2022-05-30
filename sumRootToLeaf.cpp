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
int preorder(TreeNode *root, int i){
    if(root == nullptr) return 0;
    i = i << 1 + root->val;
    return preorder(root->left, i) + preorder(root->right, i);
}




int sumRootToLeaf(TreeNode *root){
    return preorder(root, 0);
} */