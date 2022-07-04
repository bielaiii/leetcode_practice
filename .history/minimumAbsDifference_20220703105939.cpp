#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;



vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> ans;
    int mini = INT16_MAX;
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++){
        
        if(abs(arr[i] - arr[i -1]) < mini){
            ans.clear();
            mini = abs(arr[i] - arr[i -1]);
            ans.push_back({arr[i], arr[i -1]});
        }else if(abs(arr[i] - arr[i -1]) == mini){
            ans.push_back({arr[i], arr[i -1]});
        }
        
    }
    
    return ans;
}
