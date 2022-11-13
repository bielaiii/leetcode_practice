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
#include"print_2d_array.cpp"
#include"KthLargest.cpp"
#include"Twitter.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	//vector< vector<int> > pre1{{1,0},{2,0},{3,1},{3,2}};
	//vector< vector<int> > pre2{{1,0}};
	//vector<int> order1 = findOrder(4, pre1);
	//vector<int> order2 = findOrder(4, pre2);
	////print_1d_array(order1);
	vector<int> vec1 = {1,0,-1,0,-2,2};
	print_2d_array(fourSum( vec1, 0));

	return 0;
}
