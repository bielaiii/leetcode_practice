#include<iostream>
#include<vector>
using namespace std;

class Solution {
    private:
    vector<vector<int>> all_rects;
    int min_x = INT16_MAX , min_y = INT16_MAX;
    int max_x = INT16_MIN, max_y = INT16_MIN;
public:
    Solution(vector<vector<int>>& rects) {
        all_rects = rects;
        for(auto rect : rects){
            if(rect[0] <= min_x && rect[1] <= min_y ){
                min_x = rect[0];
                min_y = rect[1];
            }
            if(rect[2] >= max_x && rect[3] >= max_y ){
                max_x = rect[2];
                max_y = rect[3];
            }
        }
    }
    
    vector<int> pick() {

    }
};