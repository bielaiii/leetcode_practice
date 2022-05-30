#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> findRightInterval(vector<vector<int>>& intervals) {
    unordered_map<int, int> map_;
    vector<int> vec_;
    unordered_map<int, int>::const_iterator it;
    int max_ = 0;
    for(int i = 0; i < intervals.size(); i++){
        map_.insert({intervals[i][0], i});
        max_ = max(max_, intervals[i][0]);
    }
    for(int i = 0; i < intervals.size(); i++){
        if(map_.count(intervals[i][1])){
            vec_.push_back(map_[intervals[i][1]]);
        }else{
            int temp = intervals[i][1];
            while(temp <= max_){
                if( (it = map_.find(temp)) != map_.end() ){
                    vec_.push_back(it->second);
                    break;
                }
                temp ++;
            }
            if(temp == max_ + 1){
                vec_.push_back(-1);
            }
        }
    }
    return vec_;
}