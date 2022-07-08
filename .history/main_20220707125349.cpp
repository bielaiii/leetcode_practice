#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<vector<char>> vec = {{'1','0','1','0','0'},
								{'1','0','1','1','1'},
								{'1','1','1','1','1'},
								{'1','0','0','1','0'}
												};
	cout << maximalSquare(vec) <<endl;
	return 0;
}
