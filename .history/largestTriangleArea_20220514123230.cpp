#include<iostream>
#include<vector>
using namespace std;

double largetstTriangleArea(vector<vector<int>> &points){
    pair<int,int> left_top (9999, 0);
    pair<int,int> right_top (0,0);
    pair<int,int> left_bot (9999,9999);
    pair<int,int> right_bot (0,9999);
    for(int i = 0 ; i < points.size(); i++){
        left_top.first = min(points[i][0], left_top.first);
        left_top.second = max(points[i][1], left_top.second);
        left_bot.first = min(points[i][0], left_bot.first);
        left_bot.second = min(points[i][1], left_bot.second);
        right_top.first = max(points[i][0], right_top.first);
        right_top.second = max(points[i][1], right_top.second);
        right_bot.first = max(points[i][1], left_bot.first);
        right_bot.second = min(points[i][1], left_bot.second);
    }
}

void dfs(vector<vector<int>> &points, vector<vector<int>>& vec){
    ;
}