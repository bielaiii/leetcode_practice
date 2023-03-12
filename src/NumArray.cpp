#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

/* class NumArray {
public:
      unordered_map<int, int> mp;
      NumArray(vector<int>& nums) {
            mp[0] = nums[0];
            for(int i = 1; i < nums.size(); i++){
                  mp[i] = mp[i-1] + nums[i];
            }
      }

      int sumRange(int left, int right) {
            return mp[right] - (left - 1 >=0 ? mp[left-1] : 0);
      }
}; */

class NumArray {
public:
    unordered_map<int, int> mp;
      NumArray(vector<int>& nums) {
            mp[0] = nums[0];
            for(int i = 1; i < nums.size(); i++){
                  mp[i] = mp[i-1] + nums[i];
            }
      }

      int sumRange(int left, int right) {
            return mp[right] - (left - 1 >=0 ? mp[left-1] : 0);
      }
      void update(int index, int val) {
            
      }
    
    
};
