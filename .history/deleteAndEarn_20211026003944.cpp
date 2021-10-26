#include<iostream>
#include<vector>
#include<map>
using namespace std;


int deleteAndEarn(vector<int>& nums) {
    map<int,int> count_map;
    for(auto i = nums.begin(); i != nums.end(); i++){
        auto temp = count_map.find(*i);
        if(temp == count_map.end()){
            count_map.insert(std::pair<int,int>(*i,*i));
        }else{
            count_map[*i] += (*i);
        }
    }


}