#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>

//using namespace std;


/*  vector<int> plusOne(vector<int>& digits) {
        auto it = digits.rbegin();
        while(it != digits.rend()){
            *it += 1;
            if(*it == 10){
                *it = 0;bool buddyStrings(string s, string goal)
                digits.insert(digits.begin(), 1);
                
            }else{
                break;
            }
            it ++;
        }
        
        return digits;
} */

void printSubsequence(string input, string output)
{
	// Base Case
	// if the input is empty print the output string
	if (input.empty()) {
		cout << output << endl;
		return;
	}

	// output is passed with including
	// the Ist character of
	// Input string
	printSubsequence(input.substr(1), output + input[0]);

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output);
}



int main(void){
    vector<int> vec1 {3,1,4,1,5};
    vector<int> vec2 {1,2,3,4,5};
    vector<int> vec3 {1,3,1,5,4};
    vector<int> vec4 {1,2,4,4,3,3,0,9,2,3};
    vector<int> vec5 {-1, -2, -3};
    vector<int> vec6 {6,3,5,7,2,3,3,8,2,4};
	cout << findPairs(vec1, 2) << endl;
	cout << findPairs(vec2, 1) << endl;
	cout << findPairs(vec3, 0) << endl;
	cout << findPairs(vec4, 3) << endl;
	cout << findPairs(vec5, 1) << endl;
	cout << findPairs(vec6, 6) << endl;
    
    
	return 0;
}
