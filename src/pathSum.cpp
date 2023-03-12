#include<iostream>
#include<vector>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

void dfs_pathSum(TreeNode * root, const int & targetSum, int temp_sum,vector<vector<int>> & allpath, vector<int> cur_path){
      if(root == nullptr) return ;

      cur_path.push_back(root->val);
      temp_sum += root->val;

      if(root->left == nullptr && root->right == nullptr){
            if(temp_sum == targetSum){
                  allpath.push_back(cur_path);
            }
            return;
      }
      dfs_pathSum(root->left, targetSum, temp_sum , allpath, cur_path);
      dfs_pathSum(root->right, targetSum, temp_sum , allpath, cur_path);
}


vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      vector<vector<int>> alls;
      vector<int> path;
      int sum = 0 ;
      dfs_pathSum(root, targetSum, sum, alls, path);
      return alls;
}