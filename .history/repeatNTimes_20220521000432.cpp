#include<iostream>
#include<vector>
#include<set>
using namespace std;

int repeatNTimes(vector<int> &nums){
    set<int> set_;
    for(int i = 0; i < nums.size(); i++){
        if(set_.count(nums[i])){
            return nums[i];
        }else{
            set_.insert(nums[i]);
        }
    }
    return 0;
}