#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;
/* 
a - b = k 
a = b + k
b = a - k
only store a
 */
int findPairs(vector<int>& nums, int k) {
    unordered_set<int> set_;
    unordered_set<int> ans;
    //sort(nums.begin(), nums.end(), [](int a, int b){return a < b;});
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(set_.count(nums[i] + k)){
            cout <<"a" << nums[i] + k << " "<< nums[i] <<endl;
            ans.emplace(nums[i] + k);
        }else if(set_.count(nums[i] - k)){
            cout <<"b"<< nums[i] << " " << nums[i] << endl;
            ans.emplace(nums[i]);
        }
        set_.emplace(nums[i]);
    }
    for(auto c : ans){
        cout << c << endl;
    }
    return ans.size();
}