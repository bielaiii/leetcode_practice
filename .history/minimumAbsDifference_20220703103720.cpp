#include<iostream>
#include<vector>
#include<map>
using namespace std;


void dfs_minimumAbsDifference(vector<vector<int>> &vec, vector<int> &arr, vector<bool> visited, ){
    
    for(int i = 0; i < arr.size(); i++){
        if(visited[])
    }
}

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> ans;
    map<vector<vector<int>>, int> map_;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i +1; j < arr.size(); j++){
            map_.insert({arr[i],arr[j]} , abs(arr[i] - arr[j]));
        }
    }
    
}
