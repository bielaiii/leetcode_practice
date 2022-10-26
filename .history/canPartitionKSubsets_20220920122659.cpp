#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

void rec_carnPartitionSubsets( int k, vector<int> temp, vector< vector<int> > & all , int sum, unordered_map<int, int> remain){
      int zero = 0; 
      if(sum >= k){
            all.push_back(temp);
            return ;
      }
      auto it = remain.begin();
      while(it != remain.end()){
            if(it->second) break;
            it ++;
      }
      if(it->second){
            for(int i = k - sum; i > 0; i--){
            if(remain.count(i) && remain[i] > 0){
                  temp.push_back(i);
                  remain[i] --;
                  rec_carnPartitionSubsets(k,temp,all, sum + i, remain );
                  temp.pop_back();
                  remain[i] ++;
            }
      }
      }
}


bool canPartitionKSubsets(vector<int>& nums, int k) {
      int sum_ = 0;
      for(int num : nums) sum_ += num;
      if(! (sum_ % k) ) return 0;
      int target = sum_ / k;
      unordered_map<int ,int> remain;
      unordered_map<int ,int> ct;
      sort(nums.begin(), nums.end());
      for(int num : nums){
            if(ct.count(num)) ct[num] ++;
            else ct[num] = 1;
            if(! remain.count(num)) remain[num] = target - num;
      }
      vector< vector<int> > all;
      vector<int> tmp;
      rec_carnPartitionSubsets(k, tmp, all, 0, remain);
      for(auto i : all){
            if( accumulate(tmp.begin(), tmp.end(), 0) != k) return 0;
      }
      return 1;
}