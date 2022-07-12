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
	vector<vector<int>> vec1 {{0,1},{1,1}};
	vector<vector<int>> vec2 {{1,1},{0,0}};
	cout <<oddCells(2,3,vec1) << endl;
	cout <<oddCells(2,2,vec2) << endl;
	//cout << search2(vec1, 6) << endl;
	return 0;
}
