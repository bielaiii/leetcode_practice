#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

class Solution {
    private:
    vector<vector<int>> all_rects;
    vector<long long> each_aera;
    uni
public:
    Solution(vector<vector<int>>& rects) {
        all_rects = rects;
        for(auto rect : rects){
            int temp = (rect[1] - rect[0] + 1) * (rect[3] - rect[2] + 1);
            areas.push_back(this->areas.back() + temp);
           // area += temp;
        }
        //srand((unsigned)time(NULL));
    }
    
    vector<int> pick() {
        int id  = 0;
        int temp_area = (rand() % this->areas.back() ) + 1;
        int left = 0, right = this->areas.size() - 1;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(this->areas[mid] >= temp_area) right = mid;
            else left = mid;
        }
        vector<int> one_rect = this->all_rects[right -1];
        int temp_x = (rand() % (one_rect[2] - one_rect[0] + 1) ) + one_rect[0]; 
        int temp_y = (rand() % (one_rect[3] - one_rect[1] + 1) ) + one_rect[1];
        /*  for(auto rect : this->all_rects){
            if(temp_x >= rect[0] && temp_x <= rect[2] &&
                temp_y >= rect[1] && temp_y <= rect[3]){
                    return {temp_x, temp_y};
                }
        }  */
        
        return {temp_x, temp_y};
    }
};