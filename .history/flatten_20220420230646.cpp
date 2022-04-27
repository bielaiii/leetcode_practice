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

void traversal(stack<TreeNode*>& stack_, TreeNode* root){
    if(! root) return;
    stack_.push(root);
    traversal(stack_, root->left);
    traversal(stack_, root->right);
}


void flatten(TreeNode* root) {
    stack<TreeNode *> stack_;
    traversal(stack_, root);
    TreeNode *new_tree = root;
    TreeNode *copy_ = new_tree;
    new_tree->left = nullptr;
    new_tree->right = nullptr;
    while(! stack_.empty()){
        new_tree->right = stack_.top();
        stack_.pop();
        new_tree = new_tree->right;
    }
    root = copy_;
}