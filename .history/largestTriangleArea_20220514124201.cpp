#include<iostream>
#include<vector>
using namespace std;

double largetstTriangleArea(vector<vector<int>> &points){
    pair<int,int> left_top (9999, 0);
    pair<int,int> right_top (0,0);
    pair<int,int> left_bot (9999,9999);
    pair<int,int> right_bot (0,9999);
    for(int i = 0 ; i < points.size(); i++){
        if(points[i][1] > left_top.second && points[i][0] < left_top.first){
            left_top.first = points[i][0];
            left_top.second = points[i][1];
        }else if(points[i][1] < left_bot.second && points[i][0] < left_bot.first){
            left_bot.first = points[i][0];
            left_bot.second = points[i][1];
        }
        else if(points[i][1] > right_top.second && points[i][0] > right_top.first){
            left_top.first = points[i][0];
            left_top.second = points[i][1];
        }
        else if(points[i][1] < right_bot.second && points[i][0] > right_bot.first){
            right_bot.first = points[i][0];
            right_bot.second = points[i][1];
        }
    }
    cout << left_top << endl;
    cout << left_bot << endl;
}

void dfs(vector<vector<int>> &points, vector<vector<int>>& vec){
    ;
}