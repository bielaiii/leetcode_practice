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
    //consider to steal first house
    ans.push_back(nums[0]);
    ans.push_back(max(nums[0], nums[1]));
    for(int i = 2; i < nums.size() - 1; i++){
        ans.push_back(max(ans[i-2]+nums[i], ans[i-1]));
    }
    int first_min = ans[ans.size() -1];
    printer(ans);
    ans.clear();
    ans.push_back(nums[1]);
    ans.push_back(max(nums[1], nums[2]));
    for(int i = 3; i < nums.size() ; i++){
        cout << nums[i] << endl;
        cout << max(ans[i-2]+nums[i], ans[i-1]) << endl;
        ans.push_back(max(ans[i-2]+nums[i], ans[i-1]));
    }
    int second_min = ans[ans.size() - 1];
    printer(ans);

    //consider to steal last house;
    return max(first_min, second_min);
}