#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<vector<int>> vec1{
							{0,1,-1},
							{1,0,-1},
							{1,1,1}
	};
	vector<vector<int>> vec2{
							{1,1,-1},
							{1,-1,1},
							{-1,1,1}
	};
	cout << cherryPickup(vec1) <<endl;
	cout << cherryPickup(vec2) <<endl;
	return 0;
}
