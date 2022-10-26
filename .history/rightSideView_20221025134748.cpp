#include<iostream>
#include<vector>
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
      vector<int> vec;
      rec_rightSideView(root, vec);
      return vec;
}
