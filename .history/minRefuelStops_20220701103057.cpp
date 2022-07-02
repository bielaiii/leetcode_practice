#include<iostream>
#include<vector>
using namespace std;

int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    vector<int> vec;
    int accu = startFuel;
    vec.push_back(startFuel);
    for(int i = 1 ; i < stations.size(); i++){
        
        vec.push_back(max(vec[i-1] - stations[i][0], stations[i][1]));
    }
    return vec.push_back();
}