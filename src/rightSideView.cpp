#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void rec_rightSideView(TreeNode * root, vector<int> & vec){
      if(! root) return;
      vec.push_back(root->val);
      if(root->right){
            rec_rightSideView(root->right, vec);
      }else{
            rec_rightSideView(root->left, vec);
      }
}


vector<int> rightSideView(TreeNode* root) {
      if(! root) return {};
      queue<TreeNode *> q;
      vector<int> vec;
      //rec_rightSideView(root, vec);
      q.push(root);
      while(q.size()){
            TreeNode * temp = nullptr;
            
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                  temp = q.front();
                  if(i == sz - 1) vec.push_back(temp->val);
                  q.pop();
                  if(temp->left) q.push(temp->left);
                  if(temp->right) q.push(temp->right);
            }
      }
      return vec;
}
