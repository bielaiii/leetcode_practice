#ifndef header_h
#define header_h

#include <iostream>
#include <vector>
#include <algorithm>
struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
using namespace std;

void printer();
vector<vector <int> > threeSum(vector<int> & nums);
void hello();
vector<string> letterCombinations(string );
int reverse(int);
int search(vector<int>&, int);
int firstBadVersion(int);

int searchInsert(vector<int>&, int);

vector<int> sortedSquares(vector<int>& );

void rotate(vector<int> &, int);
void moveZeroes(vector<int> &);
vector<int> twoSum(vector<int> &, int);

void reverseString(vector<char>&);
string reverseWords(string);
int lengthOfLongestSubstring(string s);
bool checkInclusion(string s1, string s2);
vector<vector<int>> floodFill(vector<vector<int>>&, int , int , int);
int maxAreaOfIsland(vector<vector<int>>&);
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
#endif