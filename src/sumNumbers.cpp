#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
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

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

void rec_sumNumbers(TreeNode * root, int & sum, int temp_sum){
      if(! root) return;
      temp_sum *= 10;
      temp_sum += root->val;

      if(root && ! root->left && ! root->right){
            sum += temp_sum;
            return ;
      }
      rec_sumNumbers(root->left, sum, temp_sum);
      rec_sumNumbers(root->right, sum, temp_sum);
      //rec_sumNumbers(root->left, sum, temp_sum);
}

int sumNumbers(TreeNode* root) {
     int sum = 0;
      int temp_sum = 0;
      rec_sumNumbers(root, sum, temp_sum);
      return sum;
}