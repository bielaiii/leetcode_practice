#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<int> vec1 {1,2,3,4,5,6,7,8};
	vector<int> vec2 {1,2,3,4,5,6,7,8};
	cout << lenLongestFibSubseq(vec1) <<endl;
	cout << lenLongestFibSubseq(vec2) <<endl;
	return 0;
}
