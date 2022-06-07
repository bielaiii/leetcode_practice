#include<iostream>
#include<vector>
using namespace std;

class Solution {
    private:
        double x, y, radius_;
    public:
    Solution(double radius, double x_center, double y_center) :radius_(radius), x(x_center), y(y_center) {

    }
    
    vector<double> randPoint() {
        vector<double> ans;
        for(;;){
            double temp_x = (rand() % (2 * radius_ + 1)) - radius_;
            return 
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */