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


bool rec_isSubtree(TreeNode * root, TreeNode * subroot, bool start){
      if(root == nullptr && subroot == nullptr) return true;
      if(root != nullptr || subroot != nullptr)return false;
      if(start == 0 && root->val == subroot->val){
            start = 1;
            return rec_isSubtree(root->left, subroot->left, start) &&
            rec_isSubtree(root->right, subroot->right, start);
      }else if(start){
            if(root->val != subroot->val) return false;
            return rec_isSubtree(root->left, subroot->left, start) &&
            rec_isSubtree(root->right, subroot->right, start);
      }else{
            return rec_isSubtree(root->left, subroot, start) ||
            rec_isSubtree(root->right, subroot, start);
      }
      return false;
}


bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      return rec_isSubtree(root, subRoot, root->val == subRoot->val ? 1 : 0);
}