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
  string got = addBinary("1", "1");
  EXPECT_EQ(got, "10");
}
TEST(maximumSwap, test) {
    EXPECT_EQ(B::maximumSwap(2736), 7236);

    EXPECT_EQ(B::maximumSwap(9973), 9973);

}
TEST(captureForts, test) {
    vector<int> vt {1, 0, 0, -1, 0, 0, 0, 0, 1};
    EXPECT_EQ(captureForts(vt), 4);

    vector<int> vt1 {0 ,0, 1, -1};
    EXPECT_EQ(captureForts(vt1), 0);

}

TEST(canMeasureWater, test) {
    int jug1Capacity = 3;
    int jug2Capacity = 5;
    int targetCapacity = 4;
    cout << "check" << endl;
    EXPECT_EQ(true, canMeasureWater(jug1Capacity, jug2Capacity, targetCapacity));
}

int main(int argc, char** argv)
{
    InitGoogleTest();
    return RUN_ALL_TESTS();
}