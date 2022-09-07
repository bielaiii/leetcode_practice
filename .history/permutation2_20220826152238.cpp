#include<iostream>
#include<vector>
using namespace std;


void dfs_permutation(string s, string ss, vector<string> & vec, vector<bool> visited){
    if(s.size() == ss.size()){
        vec.push_back(s);
    }
    for(int i = 0; i < ss.size(); i++){
        if(! visited[i]){
            visited[i] = 1;
            s += ss[i];
            dfs_permutation(s, ss, vec, visited);
        }
    }
}


vector<string> permutation(string s) {

}