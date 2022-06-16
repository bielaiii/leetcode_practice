#include<iostream>
#include<vector>
#include<set>
using namespace std;

int partition(vector<int> &heights ,int low ,int high){
    int pivot = heights[low];
    while(low < high){
        while(low < high && heights[high] >= pivot) high--;
        heights[low] = heights[high];
        while(low < high && heights[low] <= pivot) low ++;
        heights[high] = heights[low];
    }
    heights[low] = pivot;
    return low;\
}



void QuickSort(vector<int> &heights, int low ,int high){
    if(low < high){
        int pivot = partition(heights, low, high);
        QuickSort(heights, low, pivot - 1);
        QuickSort(heights, pivot , high);
    }
}



int heightChecker(vector<int> &heights){
    set<int> set_;
    for(auto height : heights){
        set_.emplace(height);
    }
    auto beg = set_.begin();
    int ans = 0;
    for(auto height : heights)
    {
        /* code */
        cout << *beg << " " << height <<endl;
        if(* beg != height) ans++;
        beg++;
    }
    return ans;
    
}