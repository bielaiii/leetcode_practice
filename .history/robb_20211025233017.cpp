#include<iostream>
#include<vector>
using namespace std;


template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}


int robb(vector<int> &nums){
    if(!nums.size()) return 0;
    if(nums.size() == 1) return nums[0];
    vector<int> ans;
    if(nums.size() == 2){
        return max(nums[0], nums[1]);
    }
    vector<int> vec1 = {nums[0]};
    vector<int> vec2 = {nums[1]};
    vec1.push_back(max(nums[0], nums[1]));
    vec2.push_back(max(nums[1], nums[2]));
    for(int i = 2, j = 3; i < nums.size() - 1; i++, j++){
        vec1.push_back(max(vec1[vec1.size()-2]+nums[i], nums[i-1]));
        vec2.push_back(max(vec2[vec2.size()-2]+nums[j], nums[j-1]));
        printer(vec1);
        printer(vec2);
    }
    return max(vec1[vec1.size() -1], vec2[vec2.size()-1]);
}