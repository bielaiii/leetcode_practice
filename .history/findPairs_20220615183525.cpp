#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
/* 
a - b = k 
a = b + k
b = a - k
 */
int findPairs(vector<int>& nums, int k) {
    unordered_set<int> set_;
    unordered_map<int,  int> map_;
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(map_.count())
    }
    for(auto c : map_){
        cout << c.first << " " << c.second <<endl;
    }
    return map_.size();
}