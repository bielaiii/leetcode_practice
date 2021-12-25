#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
    int lh = 0;
    int lmax = 0;
    int rmax = 0;
    int rh = height.size() -1;
    while(lh < rh){
        lmax = max(lmax, height[lh ++]);
        rmax = max(rmax, height[rh --]);
    }
    cout << lmax << " " << rmax <<endl;
    return 0;
}