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

TreeNode *bfs(TreeNode *root, int key){
    if(! root) return root;
    if(root->val == key){
        return root->right;
    }
    root->left = bfs(root->left, key);
    root->right = bfs(root->right, key);
    return root;
}




TreeNode* deleteNode(TreeNode* root, int key) {
    TreeNode *copy = root;
    return bfs(root, key);
}
