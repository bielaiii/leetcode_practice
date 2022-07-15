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
        mymap[connection[1]].emplace(connection[0]);
    }
    vector<vector<int>> ans;
    for(auto temp : mymap){
        if(temp.second.size() == 1){
            int i = 0;
            while(i < ans.size()){
                if((ans[i][0] == temp.first && ans[i][1] == *temp.second.begin() ) ||
                (ans[i][0] == *temp.second.begin() && ans[i][1] == temp.first )){
                    break;
                }else{
                    i ++;
                }
            }
            if(i == ans.size())
                ans.push_back({temp.first, *temp.second.begin()});
        }
    }
    return ans;
}