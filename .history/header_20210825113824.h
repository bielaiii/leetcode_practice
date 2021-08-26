#ifndef header_h
#define header_h

#include <iostream>
#include <vector>
#include <algorithm>

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
#endif