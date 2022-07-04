#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;



vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> ans;
    int mini = INT16_MAX;
    sort(arr.begin(), arr.end(), [](int a,int b){
        return a <= b;
    });
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = i +1; j < arr.size(); j++){
            if(abs(arr[i] - arr[j]) < mini){
                ans.clear();
                ans.push_back({arr[i], arr[j]});
            }else if(abs(arr[i] - arr[j]) == mini){
                ans.push_back({arr[i], arr[j]});
            }
        }
    }
    
    return ans;
}
