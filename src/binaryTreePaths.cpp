#include<iostream>
#include <string>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void rec_binaryTreePaths(TreeNode * root, vector<string>& vt, string str){
      if(root->left == nullptr && root->right == nullptr){
            vt.push_back(str.substr(0, str.size() - 2));
      }
     // if(root->left) 
     str += to_string(root->val) + "->";
     //if(root->left)
      rec_binaryTreePaths(root->left, vt, str);
      
    //  if(root->right)
      rec_binaryTreePaths(root->right, vt, str );
      
}

vector<string> binaryTreePaths(TreeNode* root) {
      if(root == nullptr) return {};
      vector<string> vt;
      string str = "";
      rec_binaryTreePaths(root, vt, str);
      return vt;
}