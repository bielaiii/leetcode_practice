#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;

int wordCount(vector<string>& startWords, vector<string>& targetWords) {
   unordered_set<int> us;
   for(string s : startWords){
        int start = 0;
        for(char c : s){
            start |= (1 << (c - 'a'));
        }
        us.insert(start);
   }
   for(string s : targetWords){
        
   }
   return count;
}