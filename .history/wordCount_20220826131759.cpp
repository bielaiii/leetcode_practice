#include<iostream>
#include<vector>
#include<set>
using namespace std;

int wordCount(vector<string>& startWords, vector<string>& targetWords) {
   vector<set<char>> target_vec;
   vector<set<char> > start_vec;
   for(auto word : startWords){
        
   }
   for(auto word : targetWords){
        set<char> temp;
        for(int i = 0; i < word.size(); i++) temp.insert(word[i]);
        
   }
}