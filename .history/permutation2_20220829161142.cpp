#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;


void dfs_permutation(string s, string & ss, vector<string> & vec, vector<bool> visited){
    if(s.size() == ss.size()){
        vec.push_back(s);
    }
    
    for(int i = 0; i < ss.size(); i++){
        if( i > 0 && visited[i-1] != visited[i] && ! visited[i-1]){
            continue;
        }
        if(! visited[i]){
            visited[i] = 1;
            dfs_permutation(s + ss[i], ss, vec, visited);
            visited[i] = 0;
        }
    }
}


vector<string> permutation(string s) {
    vector<string> vec;
    sort(s.begin(), s.end());
    vector<bool> visited(s.size(), 0);
    string start = "";
    dfs_permutation(start, s, vec, visited);
    return vec;
}