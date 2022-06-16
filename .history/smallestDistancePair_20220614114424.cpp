#include<iostream>
#include<vector>
#include<set>
using namespace std;

int smallestDistancePair(vector<int>& nums, int k) {
    set<int> set_;
    for(auto num : nums){
        set_.emplace(abs(num[1] - num[0]));
    }
    return *set_.begin();
}