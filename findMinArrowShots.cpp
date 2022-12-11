#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int findMinArrowShots(vector<vector<int>>& points) {
      sort(points.begin(), points.end());
      int ct = 0;
      for(int i = 1; i < points.size(); i++){
           if(points[i][0] > points[i-1][1]){
                  ct ++;
           }else{
                  points[i][1] = min(points[i][1], points[i-1][1]);
           }
      }
      return ct + 1 ;
}