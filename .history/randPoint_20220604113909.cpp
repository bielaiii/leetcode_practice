#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

const double pi = acos(-1);
class Solution {
    private:
        double x, y, radius_;
    public:
    Solution(double radius, double x_center, double y_center) :radius_(radius), x(x_center), y(y_center) {

    }
    
    vector<double> randPoint() {
        vector<double> ans;
        for(;;){
            
            double temp_x = ((double)rand() / RAND_MAX) * radius_ + x - radius_;
            double temp_y = ((double)rand() / RAND_MAX) * radius_ + y - radius_;
            if(temp_x * temp_x + temp_y * temp_y <= radius_ * radius_) return {temp_x, temp_y};
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */