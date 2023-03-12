#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> frequencySort(vector<int>& nums) {
      map<int, int, greater<int> > mp;
      int maxnum = 0;
      vector<int> vec;
      for(int num : nums){
            if(mp.count(num)){
                  mp[num] ++;
                  maxnum = max(maxnum, mp[num]);
            }else{
                  mp[num] = 1;
            }
      }
      for(int i = 1; i <= maxnum; i ++){
            for(auto c : mp){
                  if(c.second == i){
                        for(int j = 0; j < c.second; j++){
                              vec.push_back(c.first);
                        }
                  }
            }
      }
      return vec;
}