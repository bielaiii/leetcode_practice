#include"header.h"
#include"data_structure.h"

//Definition for a binary tree node.
/* struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 */

void rec_preorderTraversal(TreeNode * root, std::vector<int> & vec){
      if(! root) return ;
      vec.push_back(root->val);
      rec_preorderTraversal(root->left, vec);
      rec_preorderTraversal(root->right, vec);

}

std::vector<int> preorderTraversal(TreeNode* root) {
      std::vector<int> vec;
      rec_preorderTraversal(root, vec);
      return vec;
}
