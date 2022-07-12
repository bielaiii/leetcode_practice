#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<int> vec1 {1,2,5};
	vector<int> vec2 {2};
	vector<int> vec3 {1};
	cout << coinChange(vec1, 11) <<endl;
	cout << coinChange(vec2, 3) <<endl;
	cout << coinChange(vec3, 0) <<endl;
	return 0;
}
