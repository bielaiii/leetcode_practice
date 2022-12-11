#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
using namespace std;

bool carPooling(vector<vector<int>>& trips, int capacity) {
      map<int, int> stops;
      for(auto trip : trips){
            stops[trip[1]] += trip[0];
            stops[trip[2]] -= trip[0];
      }
      int ct = 0 ;
      for(auto it : stops){
            ct += it.second;
           if(ct > capacity) return 0;
      }
      return 1;
}