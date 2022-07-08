#include<iostream>
#include<vector>
#include<set>

int findRepeatNumber(std::vector<int> &nums){
    std::set<int> myset;
    for(auto num : nums){
        if(myset.count(num)){
            return num;
        }else{
            myset.insert(num);
        }
    }
    return 0;
}