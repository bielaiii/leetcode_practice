#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<int> vec1 {10, 15, 20};
	vector<int> vec2 {1, 100, 1, 1,1,100,1,1,100,1};
	cout << minCostClimbingStairs(vec1)<< endl;
	cout << minCostClimbingStairs(vec2)<< endl;
	return 0;
}
