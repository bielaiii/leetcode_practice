#include<iostream>
#include<vector>
#include<set>
using namespace std;


int myabs(int i ){
    return i = i < 0? -i : i;
}


double largetstTriangleArea(vector<vector<int>> &points){
    double area = 0.0;
    int x1, y1, x2, y2;
    int size = points.size();
    for(int i = 0; i < size -2 ; i++){
        for(int j = 0; j < size - 1; i++){
            x1 = myabs(points[i][0] - points[j][0]);
            y1 = myabs(points[i][1] - points[j][1]);
            for(int k = k + 1; k < size; k++ ){
                x2 = myabs(points[i][0] - points[k][0]);
                y2 = myabs(points[i][1] - points[k][1]);
                area = max(area, 1.0 * myabs(x1 - x2) * myabs(y1 - y2));
            }
        }
    }
    return area / 2;;
}

void dfs(vector<vector<int>> &points, vector<vector<int>>& vec){
    ;
}