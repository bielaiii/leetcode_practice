#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;


/*  vector<int> plusOne(vector<int>& digits) {
        auto it = digits.rbegin();
        while(it != digits.rend()){
            *it += 1;
            if(*it == 10){
                *it = 0;bool buddyStrings(string s, string goal)
                digits.insert(digits.begin(), 1);
                
            }else{
                break;
            }
            it ++;
        }
        
        return digits;
} */


int main(void){
 // vector<string> vec1 {"with", "example", "sceience"};
 // string target1 = "thehat";
 // cout << minStickers(vec1, target1) << endl;
  //  vector<vector<int>> vec1 {{0,0}, {0,1}, {1,0}, {0,2}, {2,0}};
  //  cout << largestTriangleArea(vec1) <<endl;
  vector<string> vec1 {"hello","leetcode"};
  string words1 = "hlabcdefgijkmnopqrstuvwxyz";
  cout << isAlienSorted(vec1, words1) <<endl;


  //words = [], order = 
  vector<string> vec2 {"word","world","row"};
  string words2 = "worldabcefghijkmnpqstuvxyz";
  cout << isAlienSorted(vec2, words2) <<endl;
 // printer(vec1);

 vector<string> vec3 = {"apple","app"};
 string words3 = "abcdefghijklmnopqrstuvwxyz";
 cout << isAlienSorted(vec3, words3) <<endl;

 vector<int> vec4 = {"hello","hello"};
    string words4 = "abcdefghijklmnopqrstuvwxyz";
    cout << isAlienSorted(vec4, words4) <<endl;
  
}
