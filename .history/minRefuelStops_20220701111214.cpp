#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    vector<int> vec;
    int accu = startFuel;
    vec.push_back(startFuel);
    priority_queue<int> que;
    que.push(startFuel);
    while(startFuel < target){
        int temp = que.top();
        vec.push_back(max(vec[i-1] - stations[i][0], stations[i][1]));
    }
    return vec.push_back();
}