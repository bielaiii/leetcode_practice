#include<iostream>
#include<vector>
#include<map>
using namespace std;


int deleteAndEarn(vector<int>& nums) {
    if(nums.size() == 1){
        return nums[0];
    }
    cout << "?" << endl;
    vector<int> vec(1001,0);
    for(auto i = nums.begin(); i != nums.end(); i++){
        cout << "#" <<endl;
       vec[*i] += *i;
    }
    vector<int> ans(1001,0);
    ans[vec[0]] = vec[0];
    ans[vec[1]] = vec[1];
    for(int i = 2 ; i < 1002; i++){
        cout << "!" << endl;
         ans[i] = max(ans[i-2]+vec[i], ans[i-1]);
    }
       
        
    return ans[ans.size()-1];
}