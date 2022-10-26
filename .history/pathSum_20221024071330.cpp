#include<iostream>
#include<vector>
using namespace std;

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

}