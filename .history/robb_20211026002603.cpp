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
    vector<int> vec1(nums.size() - 1, 0);
    vector<int> vec2(nums.size() - 1, 0);
    vec1[0] = nums[0];
    vec2[0] = nums[1];
    vec1[1] = max(nums[0], nums[1]);
    vec2[1] = max(nums[1], nums[2]);
    for(int i = 2, j =3; i < nums.size() - 1; i++, j++){
        vec1[i] = max(vec1[i-2]+nums[i], vec1[i-1]);
        vec2[i] = max(vec2[i-2]+nums[j], vec2[j-1]);
       // printer(vec1);
       // printer(vec2);
    }
    //vec2[nums.size()-1] = max(vec2)
    int first_max  = max(vec1[vec1.size()-2], vec1[vec1.size()-1]);
    int second_max = max(vec2[vec2.size()-2], vec2[vec2.size()-1]);
    return max(first_max, second_max);
}