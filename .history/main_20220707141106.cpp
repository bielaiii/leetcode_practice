#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;




int main(void){
	vector<int> vec1 {5,7,7,8,8,10};
	vector<int> vec_ans = searchRange(vec1, 8);
	cout << vec_ans[0] << " "<< vec_ans[1] <<endl;
	return 0;
}
