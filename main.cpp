#include <iostream>
#include <queue>
#include <vector>
#include "header.h"
#include "printer.h"
using namespace std;

template <typename T>
void printVector(vector<T> vt, int len)
{
	for(int i = 0; i < len; i++)
	{
		cout << vt[i] << " ";
	}
	cout << endl;
}

int main()
{
	string str1 = "a good   example";
	cout <<"!" << reverseWords(str1) << "!" << endl;
	cout <<  reverseWords(str1)  << endl;

	return 0;
}