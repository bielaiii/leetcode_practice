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
        QuickSort(heights, pivot +1 , high);
    }
}



int heightChecker(vector<int> &heights){
    vector<int> bak = heights;
    QuickSort(bak, 0, bak.size());
    int ans = 0;
    for(int  i = 0; i < heights.size(); i++){
        if(bak[i] != heights[i]) ans ++;
    }
    
    return ans;
    
}