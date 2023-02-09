#include"header.h"
using namespace std;

int CalLeft(TreeNode * root){
      if (root == nullptr) {
            return 0;
      }
      if (root->left != nullptr) {
            return root->left->val + CalLeft(root->right);
      }
      return 0 + CalLeft(root->right);
}



int sumOfLeftLeaves(TreeNode* root) {
      int sum = 0;
      return CalLeft(root);
}