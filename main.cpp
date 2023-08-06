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
	cout << minWindow("ADOBECODEBANC", "ABC") << endl;
	return 0;
}