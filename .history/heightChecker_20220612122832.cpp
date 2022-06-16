#include<iostream>
#include<vector>
#include<set>
using namespace std;

int partition_quicksort(vector<int> &heights ,int low ,int high){
    int pivot = heights[low];
    while(low < high){
        while(low < high && heights[high] >= pivot) high--;
        heights[low] = heights[high];
        while(low < high && heights[low] <= pivot) low ++;
        heights[high] = heights[low];
    }
    heights[low] = pivot;
    return low;
}



void QuickSortHeightChecker(vector<int> &heights, int low ,int high){
    if(low < high){
        int pivot = partition_quicksort(heights, low, high);
        QuickSortHeightChecker(heights, low, pivot - 1);
        QuickSortHeightChecker(heights, pivot +1 , high);
    }
}



int heightChecker(vector<int> &heights){
    vector<int> bak = heights;
    QuickSortHeightChecker(bak, 0, bak.size());
    int ans = 0;
    for(int  i = 0; i < heights.size(); i++){
        cout << bak[i ] << " " << heights[i] <<endl;
        if(bak[i] != heights[i]) ans ++;
    }
    
    return ans;
    
}