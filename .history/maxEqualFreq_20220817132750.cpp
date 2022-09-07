#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxEqualFreq(vector<int>& nums) {
    int last = nums.size() - 2;
    unordered_map<int, int> mymap;
    int maxl = 0;
    for(int i = 0; i < last; i++){
        if(mymap.count(nums[i]) ){
            mymap[nums[i]] ++;
        }else{
            mymap[nums[i]] = 1;
        }
    }
    return 1;
}