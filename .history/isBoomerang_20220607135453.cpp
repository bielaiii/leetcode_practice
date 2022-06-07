#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

vector<double> find_equa(vector<int> point1, vector<int> point2){
    //  double k = INT16_MIN;
     // if(point1[0] - point1[0] != 0){
       double     k =( point1[1] - point2[1]) * 1.0 / (point1[0] - point2[0]) * 1.0;
      //} 
      
      double c = point2[1] - k * point2[0] * 1.0;
      cout << " k " << k << " c " << c <<endl;
      return {k, c};
}

int exist_k(vector<int> point1, vector<int> point2){
      if(point1[0] - point2[0] == 0) return INT16_MAX ;
      return point1[0] - point2[0];
}



bool isBoomerang(vector<vector<int>>& points) {
      int k1 = exist_k(points[0], points[1]);
      int k2 = exist_k(points[0], points[2]);
      if(k1 == INT16_MAX && k2 == INT16_MAX ){
            return 0;
      }else if((k1 == INT16_MAX && k2 != INT16_MAX ) || (k1 != INT16_MAX && k2 == INT16_MAX ) ){
            return 1;
      }

      else{
            //return 0;
            vector<double> vec1 = find_equa(points[0], points[1]);
            vector<double> vec2 = find_equa(points[0], points[2]);
            return vec1 != vec2;
      }
      
}