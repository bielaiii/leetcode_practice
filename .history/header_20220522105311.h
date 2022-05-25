#ifndef header_h
#define header_h

#include <iostream>
#include <vector>
#include <algorithm>
/*
struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/
using namespace std;

template <typename T> void printer(T);
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
//TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
vector<vector<int>> combine(int n, int k);
vector<vector<int>> permute(vector<int>& nums) ;
bool canArrange(vector<int>& arr, int k);
int maxSubArray(vector<int>& nums);
double myPow(double x, int n);
int orangesRotting(vector<vector<int>>& grid);
vector<vector<int>> updateMatrix(vector<vector<int>>& mat);
vector<string> letterCasePermutation(string s);
int hammingWeight(uint32_t n);
bool isPowerOfTwo(int n);
int climbStairs(int n);
int singleNumber(vector<int>& nums);
uint32_t reverseBits(uint32_t n);
int minimumTotal(vector<vector<int>>& triangle);
int fib(int n);
int minCostClimbingStairs(vector<int>& cost);
int robb(vector<int> &nums);
int deleteAndEarn(vector<int>& nums);
int jump_ii(vector<int>& nums);
void sortColors(vector<int>& nums);
bool wordBreak(string s, vector<string>& wordDict);
int maxIncreaseKeepingSkyline(vector<vector<int>>& grid);
bool isPowerOfThree(int n );
vector<int> intersection(vector<int>& nums1, vector<int>& nums2);
vector<string> findRepeatedDnaSequences(string s);
int jump(vector<int>& nums);
int maxSubarraySumCircular(vector<int>& nums);
int maxProduct(vector<int> &nums);
int maxScoreSightseeingPair(vector<int> &nums);
int maxProfit(vector<int> &nums);
int maxProfit_ii(vector<int> &nums);
int getMaxLen(vector<int>& nums);
int maxProfit_iii(vector<int> &nums, int fee);
int maxProfit_iiii(vector<int> &nums);
int numberOfArithmeticSlices(vector<int>& nums);
int numDecodings(string s);
int trap(vector<int>& height);
int nthUglyNumber(int n );
vector<vector<int>> generate(int numRows);
vector<int> getRow(int numRows);
int minFallingPathSum(vector<vector<int>>& matrix);
vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k);
int uniquePaths(int m, int n);
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid);
int minPathSum(vector<vector<int>>& grid);
int maximalSquare(vector<vector<char>>& matrix);
int lengthOfLastWord(string s);
string toGoatLatin(string sentence);
int mySqrt(int x);
int majorityElement(vector<int> & nums);
bool canFinish(int numCourses, vector<vector<int>> & prerequisites);
double findMaxAverage(vector<int>& nums, int k);
int totalFruit(vector<int>& fruits);
void bubblesort(vector<int>& vec);
void quicksort(vector<int>& vec, int low, int high);
void Quick_sort(int left,int right,vector<int> arr);
void QuickSort(vector<int> &A, int low, int high);
bool buddyStrings(string s, string goal);
int minDeletionSize(vector<string>& strs);
bool oneEditAway(string first, string second);
int maxArea(vector<int>& height);
int minStickers(vector<string>& stickers, string target);
double largestTriangleArea(vector<vector<int>> &points);
vector<int> intersectii(vector<int>& nums1, vector<int>& nums2) ;
void insertionSort(vector<int> &vec);
bool isAlienSorted(vector<string>& words, string order);
int findKthNumber(int m, int n ,int k);
int minMove2(vector<int> &nums);
vector<int> findRightInterval(vector<vector<int>>& intervals);
int repeatedNTimes(vector<int> &nums);
bool canIWin(int maxChoosableInteger, int desiredTotal);
int cutOffTree(vector<vector<int>>& forest);
#endif
