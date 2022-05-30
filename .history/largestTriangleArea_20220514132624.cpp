#include<iostream>
#include<vector>
#include<set>
using namespace std;


int myabs(int i ){
    return i = i < 0? -i : i;
}


double largestTriangleArea(vector<vector<int>> &points){
    double area = 0.0;
    int x1, y1, x2, y2;
    int size = points.size();
    for(int i = 0; i < size -2 ; i++){
        for(int j = i + 1; j < size - 1; j++){
            x1 =  points[j][0] - points[i][0];
            y1 =  points[j][1] - points[i][1];
            for(int k = k + 1; k < size; k++ ){
                x2 = points[k][0] - points[i][0];
                y2 = points[k][1] - points[i][1];
                area = max(area, 1.0 * myabs(x1*y2 - x2*y1));
                cout << area <<endl;
            }
        }
    }
    return area / 2;;
}

void dfs(vector<vector<int>> &points, vector<vector<int>>& vec){
    ;
}