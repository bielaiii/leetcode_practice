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

void printer

int main(void){
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
	string pattern = "abb";
	vector<string> ans1 = findAndReplacePattern(words, pattern);
//	printer_string(ans1);
	vector<string> words1 = {"abc","cba","xyx","yxx","yyx"};
	string pattern1 = "abc";
	vector<string> ans2 = findAndReplacePattern(words1, pattern1);
	//printer_string(ans2);
}
