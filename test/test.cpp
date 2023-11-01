#include<iostream>
#include"header.h"
#include"data_structure.h"
#include"gtest/gtest.h"
using namespace std;
using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::UnitTest;
// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  //EXPECT_STRNE("hello", "world");
  // Expect equality.
  string got = addBinary("1", "1");
  EXPECT_EQ(got, "10");
  //EXPECT_EQ(7 * 6, 42);
}

int main(int argc, char** argv)
{
    return RUN_ALL_TESTS();
}