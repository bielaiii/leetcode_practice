#include<iostream>
#include<vector>
using namespace std;
//vector<int> vec= {1,2,4,2,1,};
int singleNumber(vector<int>& nums) {
    int c = 0, r = 0;
    for(c = 0; c < nums.size() ; c++){
        for(r = 0; r < nums.size(); r++){

        }
       // cout << c << endl;
        if(r == nums.size()) return nums[c];
    }
    return nums[nums.size()-1];
}