#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> prevPermOpt1(vector<int>& arr) {
    int temp_max = INT32_MIN;
    for (int i = arr.size() - 2; i >= 0;i --) {
        if (arr[i] > arr[i + 1]) {
            int j = arr.size() - 1;
            while (arr[j] >= arr[i] || arr[j] == arr[j - 1]) {
                j--;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            break;
        }
    }
    return arr;
}