#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void printer_pair(vector<pair<char,int>> s){
	for(auto c : s){
		cout << "{ "<< c.first <<","<< c.second<< " }" << " -> ";
	}
    cout << endl;
}


void create_map(string s, vector<pair<char, int>>& map_){
    char c = s[0];
    int count = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            count++;
        }else{
            map_.push_back(pair<char, int>(c, count));
            count = 1;
            c = s[i];
        }
    }
    //map_.push_back(pair<char, int>(c, count));
    printer_pair(map_);
}


vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    unordered_set<char> pattern_set;
    unordered_set<char> each_set;
    vector<string> ans;
    for(auto c : pattern) pattern_set.emplace(c);
    for(auto word : words){
        each_set.clear();
        string str = word;
        for(auto c : word) each_set.emplace(c);
        if(each_set.size() != pattern_set.size()) continue;
        auto i = each_set.begin(), j = pattern_set.begin();
        for(; i != each_set.end(), j != pattern_set.end(); i++,j++){
            replace(word.begin(), word.end(), *i, *j );
        }
        cout << str << " " <<word <<endl;
        if(word == pattern) ans.push_back(str); 
    }
    return ans;
}