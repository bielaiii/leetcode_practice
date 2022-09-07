#include<iostream>
#include<vector>
#include<set>
using namespace std;

int wordCount(vector<string>& startWords, vector<string>& targetWords) {
   vector<set<char>> target_vec;
   for(auto word : targetWords){
        set<char> temp;
        for(int i = 0; i < word.size(); i++) temp.push(word[i]);
        
   }
}