#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
    int lh = 0;
    int let
    int rh = height.size() -1;
    while(lh < rh){
        lh = max(height[lh], height[lh ++]);
        rh = max(height[rh], height[rh --]);
    }
    cout << lh << " " << rh <<endl;
    return 0;
}