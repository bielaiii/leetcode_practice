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
	vector<int> vt1 = {0, 1, 0, 3, 12};
	vector<int> vt2 = {0, 1, 2, 2, 3, 0, 4, 2};
	//cout << removeElement(vt1, 2) << endl;
    moveZeroes(vt1);
	print_1d_array(vt1);
	return 0;
}