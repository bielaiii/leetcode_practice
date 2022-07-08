#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<int> vec1 { 1,2,3};
	vector<int> vec2 { 2,2,2,3,3};
	vector<int> vec3 { 1, 1000000};
	cout << minCostToMoveChips(vec1) <<endl;
	cout << minCostToMoveChips(vec2) <<endl;
	cout << minCostToMoveChips(vec3) <<endl;
	return 0;
}
