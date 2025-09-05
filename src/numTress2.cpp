/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

vector<TreeNode *> generate_tree_r(int lnums, int rnums) {
    if (lnums > rnums) {
        return {nullptr};
    }
    vector<TreeNode *> all;
    for (int i = lnums; i <= rnums; i++) {
        auto lefts_ = generate_tree_r(lnums, i - 1);
        auto rights_ = generate_tree_r(i + 1, rnums);
        for (auto &l : lefts_) {
            for (auto &r : rights_) {
                TreeNode *cur = new TreeNode(i);
                cur->left = l;
                cur->right = r;
                all.push_back(cur);
            }
        }
    }
    return all;
}

vector<TreeNode *> generateTrees(int n) {
    if (n == 1) {
        return vector{new TreeNode(n)};
    } else if (n == 0) {
        return vector<TreeNode *>{};
    }
    vector<vector<TreeNode *>> all_;
    vector<TreeNode *> cur_;
    return generate_tree_r(1, n);
}
int main() {
    return 0;
}
