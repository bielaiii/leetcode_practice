#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

class Solution {
    private:
    vector<vector<int>> all_rects;
    vector<int> each_aera;
    int area = 0;
    int min_x = INT16_MAX , min_y = INT16_MAX;
    int max_x = INT16_MIN, max_y = INT16_MIN;
public:
    Solution(vector<vector<int>>& rects) {
        all_rects = rects;
        for(auto rect : rects){
            int temp = (rect[1] - rect[0]) * (rect[3] - rect[2]);
            each_aera.push_back(temp);
            area += temp;
            if(rect[0] <= min_x && rect[1] <= min_y ){
                min_x = rect[0];
                min_y = rect[1];
            }
            if(rect[2] >= max_x && rect[3] >= max_y ){
                max_x = rect[2];
                max_y = rect[3];
            }
        }
        //srand((unsigned)time(NULL));
    }
    
    vector<int> pick() {
        int id  = 0;
        int temp_area = (rand() % this->area + 1);
        for( auto it : this->each_aera){
            temp_area -= it;
            id ++;
        }
        
        while(1){
            int temp_x = (rand() % (this->max_x - this->min_x + 1) ) + this->min_x; 
            int temp_y = (rand() % (this->max_y - this->min_y + 1) ) + this->min_y;
            for(auto rect : this->all_rects){
                if(temp_x >= rect[0] && temp_x <= rect[2] &&
                    temp_y >= rect[1] && temp_y <= rect[3]){
                        return {temp_x, temp_y};
                    }
            } 
        }   
        return {0,0};
    }
};