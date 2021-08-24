
//return true if fail_arr not contain the sum
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool check_go_over(int num1, int num2,int num3, vector < vector<int> > fail_vec){
    vector<int> first_vec;
    first_vec.push_back(num1);
    first_vec.push_back(num2);
    first_vec.push_back(num3);
    sort(first_vec.begin(), first_vec.end());
    for(int y = 0; y < fail_vec.size(); y++){
        vector<int> temp_vec = fail_vec[y];
        sort(temp_vec.begin(), temp_vec.end());
        if(temp_vec[0] == first_vec[0] && temp_vec[1] == first_vec[1]) return true;
    }
    return false;
}

bool check_duplicate(vector<int> add, vector< vector <int> > ret){
    sort(add.begin(), add.end());
    for(int y = 0; y < ret.size(); y++){
        vector<int> temp_vec = ret[y];
        sort(temp_vec.begin(), temp_vec.end());
        if(temp_vec == add) return true;
    }
    return false;
}

bool checkrunning(vector< vector <int> > failedvec, vector< vector <int> > successvec, vector<int> one ){
    int sum_two = one[0] + one[1];
    for(int d  =0; d < successvec.size(); d++){
        if(sum_two  == successvec[d][0] + successvec[d][1]){
            return false;
        }
    }
    for(int d =0; d < failedvec.size(); d++){
        if(one[0] == failedvec[d][0] && one[1] == failedvec[d][1]){
            return false;
        }
    }
    return true;
}


int factorial(int len, int final){
    if(len <= 1) return final;
    final *= len;
    len -=1;
    return factorial(len,final);
}

vector<vector<int> > threeSum(vector<int>& nums){
    sort(nums.begin(), nums.end());
    vector<vector <int> > ret;
    int len =  nums.size();
    int i=0;
    int left = i+1, right = len-1;
    while(i < len - 1){
        //cout << nums[left] << " " << nums[i] << " " << nums[right] << endl;
        if(nums[left] + nums[i] + nums[right] > 0){
            right --;
        }else if(nums[left] + nums[i] + nums[right] < 0){
            left ++;
        }else{
            vector<int> temp;
            temp.push_back(nums[left]);
            temp.push_back(nums[i]);
            temp.push_back(nums[right]);
            if(!(ret.back() == temp)) ret.push_back(temp);
            temp.clear();
            i ++;
            left = i + 1;
            right = len -1;
        }
        if(left >= right){
            i ++;
            left = i+1;
            right = len - 1;
            
        }
    }
    return ret;

}


