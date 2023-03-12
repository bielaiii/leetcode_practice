#include <iostream>
using namespace std;

struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int recurMerge(TreeNode* temproot){
    if(temproot == nullptr) return 0;
    else{
        return temproot->val;
    }
}
/*
TreeNode* recurTree(TreeNode* root3, TreeNode * root4){
    if(root3==nullptr || root4 == nullptr) return 0;
    if(temphead == nullptr) return 0;
    TreeNode *tempNode = new TreeNode(recurMerge(root3) + recurMerge(root4));
    
    tempNode->left = recurTree(temphead->left, root3->left, root4->left);
    tempNode->right = recurTree(temphead->right, root3->right, root4->right);
    return tempNode;
    return 0;
}
*/

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
   if(root1 == nullptr) return root2;
   if(root2 == nullptr) return root1;
   if(root1 && root2){
       root1->val += root2->val;
       root1->left = mergeTrees(root1->left, root2->left);
       root1->right = mergeTrees(root1->right, root2->right);
   }
   return root1;
}