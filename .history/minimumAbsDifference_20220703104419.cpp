#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;



vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> ans;
    map<vector<int>,  int> map_;
    sort(arr.begin(), arr.end(), [](int a,int b){
        return a <= b;
    });
    for(int i = 0; i < arr.size(); i++){
        for(int j = i +1; j < arr.size(); j++){
            ans.push_back({arr[i], arr[j]});
        }
    }
    
    return ans;
}
