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
#if 0
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
    //cout << "check" << endl;
    EXPECT_EQ(true, true);
}

TEST(getHint, test)
{
    auto str1 = "1807";
    auto gus1 = "7810";
    auto ans1 = "1A3B";
    auto str2 = "1123";
    auto gus2 = "0111";
    auto ans2 = "1A1B";
    auto str3 = "1122";
    auto gus3 = "2211";
    auto ans3 = "0A2B";
    //EXPECT_EQ(getHint(str1, gus1), ans1);
    //EXPECT_EQ(getHint(str2, gus2), ans2);
    //EXPECT_EQ(getHint(str3, gus3), ans2);

}

TEST(maximizeSquareArea, maximizeSquareArea)
{
    int m, n;
    //vector<int> hFences, vFences;
    m = 3;
    n = 9;
    vector<int> hFences {2};
    vector<int> vFences {8, 6, 5, 4};

    EXPECT_EQ(maximizeSquareArea(m, n, hFences, vFences), 4);

}


TEST(minimumRounds, minimumRounds)
{
    vector<int> vt{2,2,3,3,2,4,4,4,4,4};
    EXPECT_EQ(minimumRounds(vt), 4);
    vector<int> vt1{2, 3, 3};
    EXPECT_EQ(minimumRounds(vt1), -1);
    vector<int> vt2{3, 3};
    EXPECT_EQ(minimumRounds(vt2), 1);
    vector<int> vt3{5, 5, 5, 5};
    EXPECT_EQ(minimumRounds(vt3), 2);
    
}
#endif

TEST(findPeakGrid, findPeakGrid)
{
    vector<vector<int>> grid {{1,4},{3,2}};
    //EXPECT_EQ(findPeakGrid(grid), {1, 0});
    auto ans = findPeakGrid(grid);
    for_each(ans.begin(), ans.end(), [](auto c) {
        cout << c << " ";
    });
    
}

int main(int argc, char** argv)
{
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}