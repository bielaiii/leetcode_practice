#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
    unordered_map<int, unordered_set<int>> mymap;
    for(int i = 0; i < n; i++){
        mymap[i] = {};
    }
    for(auto connection : connections){
        mymap[connection[0]].emplace(connection[1]);
    }
    vector<vector<int>> ans;
    for(auto temp : mymap){
        if(temp.second.size() == 1){
            ans.push_back({temp.first, *temp.second.begin()});
        }
    }
    return ans;
}