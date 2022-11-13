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

void bfs_pathSum(TreeNode * root, int const target,int sum, vector<int> temp, vector< vector<int> > & all){
      if(! root) return;
      sum += root->val;
      temp.push_back(root->val);
      if(! root->left && ! root->right){
            if(sum == target){
                  all.push_back(temp);
            }
            return ;
      }
      bfs_pathSum(root->left , target, sum, temp, all );
      bfs_pathSum(root->right, target, sum, temp, all );
}


vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      vector< vector<int> > all;
      vector<int> temp;
      int sum = 0 ;
      bfs_pathSum(root, targetSum, sum, temp, all);
      return all;
}