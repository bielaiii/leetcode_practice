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
	vector<int> vec2 {1,3,7,11,12,14,18};
	vector<int> vec3 {2,4,7,8,9,10,14,15,18,23,32,50};
	cout << lenLongestFibSubseq(vec1) <<endl;
	cout << lenLongestFibSubseq(vec2) <<endl;
	cout << lenLongestFibSubseq(vec3) <<endl;
	return 0;
}
