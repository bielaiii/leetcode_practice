#include<iostream>
#include<vector>
#include<priority_queue>
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
            //i += ma.second.size();
            //ans.app(ma.second);
            i += ma.second.size();
            for(auto temp : ma.second){
                  ans.push_back(temp);
                  
                  
            }
            if(i == k) return ans;
      }
      return ans;
}