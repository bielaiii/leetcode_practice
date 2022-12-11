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
int maxnum = 0;

int bfs(TreeNode * root){
      if(root == nullptr) return 0;
      int left =  bfs(root->left);
      int right = bfs(root->right);
      int ret = root->val + left + right;
      maxnum = max(max(root->val, maxnum), max(root->val + left, root->val + right));
      return max(root->val, max(root->val + left, root->val + right));
}

int maxPathSum(TreeNode* root) {
      bfs(root);
      return maxnum;
}