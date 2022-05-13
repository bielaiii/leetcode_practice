#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int area = min(height[left], height[right]) * (right - left);
    while(left != right){
        int temp_left = max(left, left + 1);
        int temp_right = max(right, right - 1);
        area = max(area, min(height[temp_left], height[temp_right]) * (temp_right - temp_left) );
        left =temp_left;
        right =temp_right;
        cout << left <<" " << right <<endl;
    }
    return area;
}