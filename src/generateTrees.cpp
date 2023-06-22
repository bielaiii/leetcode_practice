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

void generateTreesRec(int n, TreeNode* cur, int ct_node, const int total_node, vector<int> visited) {
    if (ct_node == total_node) {
        return;
    }
    for (int i = 1; i <= total_node; i++){
        if (visited[i - 1] == 0) continue;
        visited[i - 1] = 1;
        if (i > cur->val) {
            TreeNode *temp = new TreeNode(i);
            cur->right = temp;
            generateTreesRec(i, cur->right, ct_node + 1, total_node, visited);
        } else if (i < cur->val) {
            TreeNode *temp = new TreeNode(i);
            cur->left = temp;
            generateTreesRec(i, cur->left, ct_node + 1, total_node, visited);
        }
        visited[i - 1] = 0;
    }
}

vector<TreeNode*> generateTrees(int n) {
    vector<TreeNode *> vet (n, nullptr);
    for (int i = 0; i < n; i++) {
        vet[i] = new TreeNode(i + 1);
    }
    int sz = n;
    int ct = 1;
    vector<int>visited (n, 0);
    for (int i = 0; i < n; i++) {
        visited[vet[i]->val - 1] = 1;
        generateTreesRec(i + 1, vet[i], ct, sz, visited);
    }
    return vet;
}