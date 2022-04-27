#include <vector>
#include <iostream>
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

void rec_traversal(vector<int>& vec, TreeNode * root){
    if(root == nullptr) return ;
    rec_traversal(vec, root->left);
    vec.push_back(root->val);
    
    rec_traversal(vec, root->right);
}




vector<int> inorderTraversal(TreeNode * root){
    vector<int> vec;
    rec_traversal(vec, root);
}