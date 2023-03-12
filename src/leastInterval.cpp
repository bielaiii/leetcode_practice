#include<iostream>
#include<vector>
#include<map>
using namespace std;

int leastInterval(vector<char>& tasks, int n) {
      map<char, int> mp;
      int maxcount = 0 ;
      for(auto task : tasks){
            mp[task] ++;
            maxcount = max(maxcount, mp[task]);
      }
      int count = (maxcount - 1) * (1 + n) ;
      int sameamount = 0;
      for(auto it : mp){
            if(it.second == maxcount) sameamount ++;
      }
      count += sameamount;
      return max(count , static_cast<int> (tasks.size()));
}