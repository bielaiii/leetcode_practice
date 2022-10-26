#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include<set>
#include<map>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include<queue>
#include"print_1d_array.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<vector<int > >  vec1 {{1,0},{0,1}};
	vector<vector<int > >  vec2 {{1,1},{0,1}};
	vector<vector<int > >  vec3 {{1,0,1}, {0,0,0},{0,1,1}};
	//cout << largestIsland(vec1) <<endl;
	//cout << largestIsland(vec2) <<endl;
	cout << largestIsland(vec3) <<endl;
	return 0;
}
