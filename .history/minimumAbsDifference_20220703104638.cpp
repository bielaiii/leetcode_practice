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
    
    int mini = abs(arr[0] - arr[1]);
    for(int i = 0; i < arr.size(); i++){
        for(int j = i +1; j < arr.size(); j++){
            if(abs(arr[i] - arr[j]) == mini)
                ans.push_back({arr[i], arr[j]});
        }
    }
    
    return ans;
}
