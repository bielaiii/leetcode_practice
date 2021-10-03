#include<iostream>
#include<vector>
using namespace std;
//vector<int> vec= {1,2,4,2,1,};
int singleNumber(vector<int>& nums) {
    int c = 0, r = 0;
    for(c = 0; c < nums.size(); c++){
        for(r = c+1; r < nums.size(); r++){
            cout << nums[c] <<" "<<nums[r] <<endl;
            if(nums[r] == nums[c]) break;
        }
        if(c == nums.size()) return nums[r];
    }
    return 0;
}