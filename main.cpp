#include<iostream>
#include<queue>
#include <cassert>
//#include <gtest/gtest.h>
#include"header.h"
//
//#include"print_2d_array.cpp"
using namespace std;


/* 
TEST(myfunctions, arrangeCoins)
{
    GTEST_ASSERT_EQ(numDupDigitsAtMostN(20), 1);
};

TEST(myfunctions, arrangeCoins2)
{

    GTEST_ASSERT_EQ(vector<int> qus {2,3,6,7};
    vector<vector<int>> vt = combinationSum(qus, 7, 10);
};
 */

int main(int argc, char* argv[])
{
    vector<int> que1{3,2,1};
    vector<int> que2{1,1,5};
    vector<int> que3{1,9,4,6,7};
    print_1d_array(prevPermOpt1(que1));
    print_1d_array(prevPermOpt1(que2));
    print_1d_array(prevPermOpt1(que3));
    
    
    
    
    return 0;
}