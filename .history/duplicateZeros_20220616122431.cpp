#include<iostream>
#include<vector>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            if(i != arr.size() - 1){
                int temp = i + 1;
                while(! arr[temp]){
                    temp++;
                }
                cout << temp <<endl;
                while(temp > i + 1){
                    arr[temp] = arr[temp-1];
                    temp--;
                }
                arr[i + 1] = 0;
            }
                
        }
    }
}