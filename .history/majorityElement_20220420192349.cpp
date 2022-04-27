#include <iostream>
#include <map>
#include <vector>
using namespace std;


int majorityElement(vector<int> & nums){
    map<int,int> map_;
    for(int i = 0; i < nums.size(); i++){
        if(map_.count(nums[i])){
            map_[nums[i]] += 1;
        }else{
            map_[nums[i]] = 1;
        }
    }
    int max_= 0 ;
    for(auto i = map_.begin(); i != map_.end(); i++){
        if(i->second > max_) max_ = i->second;
    }
    return max_;
}