#include"header.h"
#include <cassert>
#include"print_1d_array.cpp"
#include"print_2d_array.cpp"
//#include<iostream>
#include<queue>
#include <gtest/gtest.h>

using namespace std;

TEST(myfunctions, arrangeCoins)
{
    GTEST_ASSERT_EQ(arrangeCoins(5), 2);
    
};

TEST(myfunctions, arrangeCoins2)
{
    GTEST_ASSERT_EQ(arrangeCoins(8), 3);
};


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}