#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &ret, vector<int> &temp, int n, int k, int x){
    if(temp.size() == k){
        ret.push_back(temp);
        return ;
    }
        
    
    for(int d = x + 1; d <= n; d++ ){
        temp.push_back(d);
        dfs(ret, temp, n, k ,d);
        temp.pop_back();
    }
    
}


vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> final;
    vector<int> vec;
    dfs(final, vec, n,k,0);
    return final;
}

