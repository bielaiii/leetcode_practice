#include <iostream>
#include <vector>
#include <string>
#include <stack>

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
void traversal(stack<TreeNode*>& stack_, TreeNode* root){
    if(! root) return;
    stack_.push(root);
    traversal(stack_, root->left);
    traversal(stack_, root->right);
}


void flatten(TreeNode* root) {
    if(! root) return;
    flatten(root->right);
    flatten(root->left);
    root->right = last;
    root->left = nullptr;
    last = root;
} */