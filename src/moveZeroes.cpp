#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void swap(vector<int> &vet, int &a, int b) {
    while (a < b && vet[a]){ a++;}
    int c = vet[a];
    vet[a] = vet[b];
    vet[b] = c;
}

void moveZeroes(vector<int>& nums) {
    int i = 0;
    int j = nums.size() - 1;
    for (int t = 0; t < nums.size(); t++) {
        if (nums[t]) {
            swap(nums, i, t);
        }
    }
    
}