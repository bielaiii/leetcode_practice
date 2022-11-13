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
#include"KthLargest.cpp"
#include"Twitter.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector< vector<int> > pre1{{1,0},{2,0},{3,1},{3,2}};
	vector<int> order = findOrder(4, pre1);
	print_1d_array(order);



	
	return 0;
}
