#include<istream>
#include<vector>
using namespace std;

void rec_maxDepth(TreeNode * root, int curd, int & max_d){
      if(root == nullptr){
            max_d = max(max_d , curd);
      }
      rec_maxDepth(root->left, curd + 1, max_d);
      rec_maxDepth(root->right, curd + 1, max_d);
}


int maxDepth(TreeNode* root) {
      int dep = 0;
      int cur = 0;
      rec_maxDepth(root, cur, dep);
      return dep;
}