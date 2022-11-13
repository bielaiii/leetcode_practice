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

template<typename T>
void print_1d_array(T toprint);

template<typename T>
void print_2d_array(T toprint);

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
vector<vector<int> > floodFill(vector<vector<int> >&, int , int , int);
int maxAreaOfIsland(vector<vector<int> >&);
//TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
vector<vector<int> > combine(int n, int k);
vector<vector<int> > permute(vector<int>& nums) ;
bool canArrange(vector<int>& arr, int k);
int maxSubArray(vector<int>& nums);
double myPow(double x, int n);
int orangesRotting(vector<vector<int> >& grid);
vector<vector<int> > updateMatrix(vector<vector<int> >& mat);
vector<string> letterCasePermutation(string s);
int hammingWeight(uint32_t n);
bool isPowerOfTwo(int n);
int climbStairs(int n);
int singleNumber(vector<int>& nums);
uint32_t reverseBits(uint32_t n);
int minimumTotal(vector<vector<int> >& triangle);
int fib(int n);
int minCostClimbingStairs(vector<int>& cost);
int robb(vector<int> &nums);
int deleteAndEarn(vector<int>& nums);
int jump_ii(vector<int>& nums);
void sortColors(vector<int>& nums);
bool wordBreak(string s, vector<string>& wordDict);
int maxIncreaseKeepingSkyline(vector<vector<int> >& grid);
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
vector<vector<int> > generate(int numRows);
vector<int> getRow(int numRows);
int minFallingPathSum(vector<vector<int> >& matrix);
vector<vector<int> > matrixBlockSum(vector<vector<int> >& mat, int k);
int uniquePaths(int m, int n);
int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid);
int minPathSum(vector<vector<int> >& grid);
int maximalSquare(vector<vector<char> >& matrix);
int lengthOfLastWord(string s);
string toGoatLatin(string sentence);
int mySqrt(int x);
int majorityElement(vector<int> & nums);
bool canFinish(int numCourses, vector<vector<int> > & prerequisites);
double findMaxAverage(vector<int>& nums, int k);
int totalFruit(vector<int>& fruits);
vector<int> dailyTemperatures(vector<int>& temperatures);
void bubblesort(vector<int>& vec);
void quicksort(vector<int>& vec, int low, int high);
void Quick_sort(int left,int right,vector<int> arr);
void QuickSort(vector<int> &A, int low, int high);
bool buddyStrings(string s, string goal);
int minDeletionSize(vector<string>& strs);
bool oneEditAway(string first, string second);
int maxArea(vector<int>& height);
int minStickers(vector<string>& stickers, string target);
double largestTriangleArea(vector<vector<int> > &points);
vector<int> intersectii(vector<int>& nums1, vector<int>& nums2) ;
void insertionSort(vector<int> &vec);
bool isAlienSorted(vector<string>& words, string order);
int findKthNumber(int m, int n ,int k);
int minMove2(vector<int> &nums);
vector<int> findRightInterval(vector<vector<int> >& intervals);
int repeatedNTimes(vector<int> &nums);
bool canIWin(int maxChoosableInteger, int desiredTotal);
int cutOffTree(vector<vector<int> >& forest);
int findSubstringInWraproundString(string p);
vector<int> fallingSquares(vector<vector<int> >& positions);
int findClosest(vector<string>& words, string word1, string word2);
string removeOuterParentheses(string s);
string validIPAddress(string queryIP);
int maxProfit_iv(vector<int>& prices);
bool makesquare(vector<int>& matchsticks);
int consecutiveNumbersSum(int n);
string alienOrder(vector<string>& words);
int numUniqueEmails(vector<string>& emails);
//class MyCalendarThree;
int minEatingSpeed(vector<int>& piles, int h);
bool isBoomerang(vector<vector<int> >& points);
int distinctSubseqII(string s);
int countPalindromicSubsequences(string s);
bool isPalindrome(string s);
int minFlipsMonoIncr(string s);;
int maxScore(string s);
vector<string> findAndReplacePattern(vector<string>& words, string pattern);
int heightChecker(vector<int> &heights);
//oid printSubsequence(string input, string output);
vector<int> findDiagonalOrder(vector<vector<int> >& mat);
int canCompleteCircuit(vector<int> &gas, vector<int> &cost);
int longestValidParentheses(string s);
int smallestDistancePair(vector<int>& nums, int k);
int findPairs(vector<int>& nums, int k);
void duplicateZeros(vector<int>& arr) ;
int findLUSlength(vector<string>& strs);
//vector<int> findFrequentTreeSum(TreeNode* root) ;
//int findBottomLeftValue(TreeNode* root);
int minCost(vector<vector<int> >& costs);
void wiggleSort(vector<int>& nums);
int numPrimeArrangements(int n);
int nextGreaterElement(int n);
//vector<vector<int> > minimumAbsDifference;
int evaluate(string expression);
string replaceWords(vector<string>& dictionary, string sentence);
int minCostToMoveChips(vector<int>& position);
int longestCommonSubsequence(string text1, string text2) ;
vector<int> searchRange(vector<int>& nums, int target);
int lenLongestFibSubseq(vector<int>& arr) ;
int cherryPickup(vector<vector<int> >& grid) ;
string replaceSpace(string s);
string reverseLeftWords(string s, int n);
int coinChange(vector<int>& coins, int amount) ;
int maximum_subarray(vector<int> &nums);
int lengthOfLIS(vector<int>& nums) ;
int findRepeatNumber(std::vector<int> &nums);
int getMinimumTime(vector<int>& time, vector<vector<int> >& fruits, int limit);
int missingNumber(vector<int>& nums);
int search2(vector<int>& nums, int target) ;
int oddCells(int m, int n, vector<vector<int> >& indices);
int minArray(vector<int> &nums);
bool findNumberIn2DArray(vector<vector<int> >& matrix, int target);
int minArray(vector<int> &nums);
char firstUniqChar(string s) ;
int perfectMenu(vector<int>& materials, vector<vector<int> >& cookbooks, vector<vector<int> >& attribute, int limit);
int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks);

vector<int> asteroidCollision(vector<int>& asteroids);
int numIslands(vector<vector<char> >& grid);;
vector<string> reorderLogFiles(vector<string>& logs);
vector<vector<int> > kClosest(vector<vector<int> >& points, int k);
string longestPalindrome(string s);
string mostCommonWord(string paragraph, vector<string>& banned) ;
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t);
vector<int> partitionLabels(string s);
vector<int> prisonAfterNDays(vector<int>& cells, int n) ;
int subarraySum(vector<int>& nums, int k);
int largestVariance(string s);
int totalStrength(vector<int>& strength);
vector<string> wordBreakii(string s, vector<string>& wordDict);
void QuickSort(vector<int>& vec, int low, int high);
vector<int> twoSum2(vector<int>& numbers, int target);

int wordCount(vector<string>& startWords, vector<string>& targetWords);
bool isAnagram(string s, string t);
vector<int> findAnagrams(string s, string p);
vector<string> findRelativeRanks(vector<int>& score);
vector<int> constructArray(int n, int k);
int minOperations(vector<string>& logs);
bool containsDuplicate(vector<int>& nums);
int missingNumber2(vector<int>& nums) ;
bool searchMatrix(vector<vector<int>>& matrix, int target);
bool search3(vector<int>& nums, int target);
int specialArray(vector<int>& nums);
int maximumSwap(int num);
int findPeakElement(vector<int>& nums);
double trimMean(vector<int>& arr);
int bulbSwitch(int n);
int rectangleArea(vector<vector<int>>& rectangles);
int maxLengthBetweenEqualCharacters(string s) ;
int largestIsland(vector<vector<int>>& grid);
vector<int> frequencySort(vector<int>& nums);
string convert(string s, int numRows);
bool canPartitionKSubsets(vector<int>& nums, int k) ;
vector<int> missingTwo(vector<int>& nums);
bool isPerfectSquare(int num);
int peakIndexInMountainArray(vector<int>& arr);
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d);
vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites);
vector<vector<int>> fourSum(vector<int>& nums, int target);
void nextPermutation(vector<int>& nums);
bool isHappy(int n);
int findDuplicate(vector<int>& nums) ;
string interpret(string command);
int findContentChildren(vector<int>& g, vector<int>& s);
vector<vector<int>> findWinners(vector<vector<int>>& matches);
int numTimesAllBlue(vector<int>& flips);
bool rec_validPartition(const vector<int>& nums, int j );
#endif
