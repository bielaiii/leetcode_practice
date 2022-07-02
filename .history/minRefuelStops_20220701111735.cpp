#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
  //  vector<int> vec;
  //  int accu = startFuel;
  //  vec.push_back(startFuel);
    priority_queue<int> que;
   // que.push(startFuel);
    int i = 0;
    int ans = 0;
    while(startFuel < target){
        while(i < stations.size() && startFuel >= stations[i][0]){
            que.push(stations[i][1]);
            i ++;
        }
        if(que.empty()) return -1;
        startFuel += que.top();
        que.pop();
        //int temp = que.top();
        //vec.push_back(max(vec[i-1] - stations[i][0], stations[i][1]));
        ans ++;
    }
    return ans;
}