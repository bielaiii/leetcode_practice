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
        cout << c << endl;
        if(r == nums.size() && nums[c] != nums[r-1]) return nums[c];
    }
    return 0;
}