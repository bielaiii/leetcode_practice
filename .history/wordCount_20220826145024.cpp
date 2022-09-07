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
   int count = 0;

   for(string s : targetWords){
        int snum = 0;
        for(char c : s){
            snum |= ( 1 << ( c - 'a'));
        }
        for(char c : s){
            if(us.count(snum ^ (1 << (c - 'a') ))){
                count ++;
                break;
            }
        }
   }
   return count;
}