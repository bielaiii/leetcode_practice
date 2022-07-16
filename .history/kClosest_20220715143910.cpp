#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<vector<int>> ans;
      map<int, vector<vector<int>>> mymap;
      for(int i = 0; i < points.size(); i++){
            int squ = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            mymap[squ].push_back({points[i][0], points[i][1] });
      }
      int i = 0 ;

      for(auto ma : mymap){
            for(auto temp : ma.second){
                  ans.push_back(temp);
                  i ++;
                  if(i == k) return ans;
            }
      }
      return ans;
}