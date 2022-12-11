#include<iostream>
#include<vector>
using namespace std;;

     
struct TreeNode {
      int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

                                  // <buy, not buy>
vector<int> rec_tree(TreeNode * root){
      if(root == nullptr) return {0,0} ;

      vector<int> lval = rec_tree(root->left);
      vector<int> rval = rec_tree(root->right);

      int buy = root->val + lval[0] + rval[0];
      int notbuy = max(rval[0], rval[1]) + max(lval[0], lval[1]);
      return {buy, notbuy};

}

int rob(TreeNode* root) {
      vector<int> ans = rec_tree(root);
      return max(ans[0], ans[1]);
}