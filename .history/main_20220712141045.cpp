#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<vector<int>> fruits1 {{0,2},{1,4},{2,1}};
	vector<int> times {2,3,2};
	cout << getMinimumTime(times, fruits1, 3) <<endl;
	
	return 0;
}
