#include<vector>
#include<iostream>
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


int jump_ii(vector<int>& nums) {
    int bound = 0;
    int step = 0;
    int long_ = 0;
    for(int i = 0; i < nums.size(); i++){
        long_ = max(long_, nums[i]);
        if(i == bound){
            
        }
    }
   // cout << "steps : " << step << endl;
    return step;
}