#include<iostream>
#include<vector>
#include<set>
using namespace std;


int BS(vector<int> &arr, int target, int l, int r){
    while(l <= r){
        int idx = (r + l) / 2;
        if(arr[idx] == target){
            return arr[idx];
        }else if(arr[idx] < target){
            l = idx + 1;
        }else{
            r = idx - 1;
        }
    }
    return -1;
}



int lenLongestFibSubseq(vector<int>& arr) {
    vector<int> vec(arr.size(), 0);
    int i = 0, j = 0;
    int first = arr[0];
    int second = arr[1];
    int len = 0;
    for(i = 0; i < arr.size(); i++){
        
        for(j = i + 1; j < arr.size(); j++){
            int sum = 0;
            second = arr[j];
            first = arr[i];
            int temp_len = 2;
            while( (sum = BS(arr, first + second, j +1, arr.size() - 1)) != -1){
                first = second;
                second = sum;
                temp_len ++;
            }
            len = max(len ,temp_len);
        }
    }
    return len;
}

