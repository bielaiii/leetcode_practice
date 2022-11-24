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
#include"template_checker.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	vector<int> vt1 {2,1,4,3};
	vector<int> vt2 {2,9,2,5,6};
	vector<int> vt3 {73,55,36,5,55,14,9,7,72,52};
	int ans1 = numSubarrayBoundedMax(vt1, 2, 3);
	int ans2 = numSubarrayBoundedMax(vt2, 2, 8);
	int ans3 = numSubarrayBoundedMax(vt3, 2, 8);
	//int ans3 = numSubarrayBoundedMax(vt1, 2, 8));
	//int ans4 = numSubarrayBoundedMax(vt1, 2, 8));
	vector<int> answer = {3,7,22};
	vector<int> input = {ans1, ans2, ans3};
	template_checker(answer, input);
	//cout << "ans "<< " with " << ans1 <<" but "<<(ans1 == 3) <<endl;
	//cout << "ans "<< " with " << ans2 <<" but "<<(ans2 == 2) <<endl;
	//cout << "ans "<< " with " << ans2 <<" but "<<(ans3 == 0) <<endl;
	
	return 0;
}
