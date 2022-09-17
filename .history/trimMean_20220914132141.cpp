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
      for(auto it = 1; it < mymap.size() - 1; i++ ){
            
      }
      return ans;
}