#include<vector>
#include<iostream>
#include<map>
using namespace std;

double trimMean(vector<int>& arr) {
      double ans = 0;
      map<int, vector<int> > mymap;
      for(auto num : arr){
            mymap[5 % num].push_back(num);
      }
      double ct = 0;
      double sum = 0;
      auto it = mymap.begin();
      it ++;
      for(int i = 1 ; i  < mymap.size() - 1; i++, it++ ){
            ct += it->size();
            for(auto num : )
      }
      return ans;
}