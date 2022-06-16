#include<iostream>
#include<vector>
#include<time.h>
#include<random>
using namespace std;

class Solution {
    private:
    vector<vector<int>> all_rects;
    vector<long long> each_aera;
    uniform_int_distribution<long long> uniform_;
    long long area = 0;
    random_device rd;
public:
    Solution(vector<vector<int>>& rects) {
        all_rects = rects;
        for(auto rect : rects){
            int temp = (rect[1] - rect[0] + 1) * (rect[3] - rect[2] + 1);
            each_aera.push_back(temp);
            area += temp;
        }
        uniform_ = uniform_int_distribution<long long>(1, area);
        //srand((unsigned)time(NULL));
    }
    
    vector<int> pick() {
        int id  = 0;
        long long temp_area = uniform_(rd);
        int left = 0, right = this->each_aera.size() - 1;
        while(temp_area > 0 && left < this->each_aera.size()){
            temp_area -= this->each_aera[left];
            left++;
        }
        vector<int> one_rect = this->all_rects[left];
        
        //int temp_x = (rand() % (one_rect[2] - one_rect[0] + 1) ) + one_rect[0]; 
        //int temp_y = (rand() % (one_rect[3] - one_rect[1] + 1) ) + one_rect[1];
        uniform_int_distribution<int> temp_x(one_rect[0], one_rect[2]);            
        uniform_int_distribution<int> temp_y(one_rect[1], one_rect[3]);    
        return {temp_x(rd), temp_y(rd)};
    }
};