#include<iostream>
#include<vector>
#include<set>
using namespace std;


int BS(vector<int> &arr, int target){
    int left = 0, right = arr.size() - 1;
    while(left <= right){
        int idx = (right + left) / 2;
        if(arr[idx] == target){
            return idx;
        }else if(arr[idx] < target){
            left = idx + 1;
        }else{
            right = idx - 1;
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
            first = arr[i];
            second = arr[j];
            int temp_len = 2;
            while(1){
                int temp = BS(arr, first + second);
                if(temp == -1){
                    break;
                }else{
                    first = second;
                    second = temp;
                    temp_len ++;
                }
            }
            cout << arr[i] << arr[j] << "final len : " << temp_len  <<endl;
            len = max(len ,temp_len);
        }
    }
    return len;
}

