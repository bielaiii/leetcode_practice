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
	vector<int> vec1 { 5, 10, -5};
	vector<int> vec2 { 8,-8};
	vector<int> vec3 { 10, 2, -5};
	printer(asteroidCollision(vec1));
	printer(asteroidCollision(vec2));
	printer(asteroidCollision(vec3));
	
	return 0;
}
