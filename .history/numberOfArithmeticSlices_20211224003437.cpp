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


int numberOfArithmeticSlices(vector<int>& nums) {
    vector<int> diffe (nums.size() - 1, 0);
    for(int i = 0; i < nums.size() - 1; i++){
        diffe[i] = nums[i+1] - nums[i];
    }
    printer(diffe);
    int len = 1;
    int len1 = 0;
    for(int i = 0; i < diffe.size() - 1; i++){
        if(diffe[i] == diffe[i+1]){
            len ++;
        }else{
            //cout << len << " " << len1 <<endl;
            len1 = max(len, len1);
            len = 1;
        }
    }
    len1 = max(len, len1);
    return len1 > 2? len1 : 0 ;
}