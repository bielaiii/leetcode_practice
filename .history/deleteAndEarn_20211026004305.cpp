#include<iostream>
#include<vector>
#include<map>
using namespace std;


int deleteAndEarn(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    map<int,int> count_map;
    for(auto i = nums.begin(); i != nums.end(); i++){
        auto temp = count_map.find(*i);
        if(temp == count_map.end()){
            count_map.insert(std::pair<int,int>(*i,*i));
        }else{
            count_map[*i] += (*i);
        }
    }
    vector<int> vec;
    for(auto i =count_map.begin(); i != count_map.end(); i++){
        vec.push_back(i->second);
    }
    vector<int> ans;
    ans.push_back(vec[0]);
    ans.push_back(vec[1]);
    for(int i = 2 ; i < vec.size(); i++){
        ans.push_back(max(ans[i-2]+vec[i], ans[i-1]));
    }
    return ans[ans.size()-1];
}