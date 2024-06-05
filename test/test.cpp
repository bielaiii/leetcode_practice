#include "data_structure.h"
#include "header.h"
#include "gtest/gtest.h"
#include <iostream>
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

TEST(findPeakGrid, findPeakGrid)
{
    vector<vector<int>> grid {{1,4},{3,2}};
    //EXPECT_EQ(findPeakGrid(grid), {1, 0});
    auto ans = findPeakGrid(grid);
    for_each(ans.begin(), ans.end(), [](auto c) {
        cout << c << " ";
    });
    
}

TEST(test_suite_name, test_name) {
    vector<vector<int>> vt{{1, 3}, {2, 3}, {3, 6}, {5, 6},  {5, 7},
                           {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
    auto ans = findWinners(vt);
    EXPECT_THAT(ans[0], ::testing::ElementsAre(1, 2, 10));
    EXPECT_THAT(ans[1], ::testing::ElementsAre(4, 5, 7, 8));
}


TEST(test_suite_name, test_name) {
    string s1 = "abcabcbb";
    using namespace B;
    EXPECT_EQ(B::lengthOfLongestSubstring(s1), 3);
    string s2 = "bbbbb";
    EXPECT_EQ(B::lengthOfLongestSubstring(s2), 1);
    string s3 = "pwwkew";
    EXPECT_EQ(B::lengthOfLongestSubstring(s3), 3);



    string s4 = " ";
    EXPECT_EQ(B::lengthOfLongestSubstring(s4), 1);
    string s5 = "aab";
    EXPECT_EQ(B::lengthOfLongestSubstring(s5), 2);
}


TEST(test_suite_name, test_name) {
    vector<int> vt1 {1, 3 ,8 ,48, 10};
    EXPECT_EQ(longestNiceSubarray(vt1), 3);
    vector<int> vt2{3, 1, 5, 11, 13};
    EXPECT_EQ(longestNiceSubarray(vt2), 1);
}


TEST(test_suite_name, test_name) {
    int n = 5, limit = 2;
    EXPECT_EQ(distributeCandies(n, limit), 3);

    n = 3;
    limit = 3;
    EXPECT_EQ(distributeCandies(n, limit), 10);
}
#endif

TEST(test_suite_name, test_name) {
    EXPECT_EQ((val1), val2)
}


int main(int argc, char** argv) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
};