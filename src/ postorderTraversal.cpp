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


void rec_postorderTraversal(TreeNode * root, vector<int> & vec){
      if(! root) return ;
      
      rec_postorderTraversal(root->left, vec);
      rec_postorderTraversal(root->right, vec);
      vec.push_back(root->val);

}

vector<int> postorderTraversal(TreeNode* root) {
      vector<int> vec;
      rec_postorderTraversal(root, vec);
      return vec;
}
