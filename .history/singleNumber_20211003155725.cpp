#include<iostream>
#include<vector>
using namespace std;
//vector<int> vec= {1,2,4,2,1,};

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
        //for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
       // }
       // cout << endl;
    }
    cout << endl;
    cout << "------------------"<<endl;
}

int singleNumber(vector<int>& nums) {
    if(nums.size() == 1) return nums[0];
   // cout << "size: "<< nums.size() << endl;
    sort(nums.begin(), nums.end());
    for(int i =0; i < nums.size()-1; i+=2){
        if(num[i] != nums[i+1]) return i;
    }
    return 0;
}