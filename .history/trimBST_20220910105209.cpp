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

void trimBST(TreeNode *root, int low, int high){
      if( ! root ) return ;
      if(root->val < low || root->val > high){
            root = nullptr;
      }
      trimBST
}


TreeNode* trimBST(TreeNode* root, int low, int high) {

}
