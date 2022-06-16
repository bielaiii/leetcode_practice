#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

class Solution {
    private:
    vector<vector<int>> all_rects;
    vector<int> each_aera;
    //int area = 0;
    int min_x = INT16_MAX , min_y = INT16_MAX;
    int max_x = INT16_MIN, max_y = INT16_MIN;
public:
    Solution(vector<vector<int>>& rects) {
        all_rects = rects;
        for(auto rect : rects){
            int temp = (rect[1] - rect[0] + 1) * (rect[3] - rect[2] + 1);
            each_aera.push_back(this->each_aera.back() + temp);
           // area += temp;
        }
        //srand((unsigned)time(NULL));
    }
    
    vector<int> pick() {
        int id  = 0;
        int temp_area = (rand() % this->each_aera.back() ) + 1;
        int left = 0, right = this->each_aera.size() - 1;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(this->each_aera[mid] >= temp_area) left = mid;
            else right = mid;
        }
        vector<int> one_rect = this->all_rects[right];
        int temp_x = (rand() % (this->all_rects[id][2] - this->all_rects[id][0] + 1) ) + this->all_rects[id][0]; 
        int temp_y = (rand() % (this->all_rects[id][3] - this->all_rects[id][1] + 1) ) + this->all_rects[id][1];
        /*  for(auto rect : this->all_rects){
            if(temp_x >= rect[0] && temp_x <= rect[2] &&
                temp_y >= rect[1] && temp_y <= rect[3]){
                    return {temp_x, temp_y};
                }
        }  */
        
        return {temp_x, temp_y};
    }
};