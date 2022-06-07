#include<iostream>
#include<vector>
#include<map>
using namespace std;


bool isBoomerang(vector<vector<int>>& points) {
      map<int,int> map_;
      //auto it = map_.begin();
      for(auto & point : points){
            for(auto &it : map_){
                  if(point[0] * it.first + it.second == point[1]){
                        return false;
                  }
            }
            
      }
      return true;
}