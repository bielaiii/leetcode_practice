#include "header.h"
#include "printer.h"
#include <iostream>
#include <queue>
#include <ranges>
#include <vector>
using namespace std;

int main(void)
{

    vector<vector<int>> grid {{1,4},{3,2}};
    //EXPECT_EQ(findPeakGrid(grid), {1, 0});
    auto ans = findPeakGrid(grid);
    for_each(ans.begin(), ans.end(), [](auto c) {
        cout << c << " ";
    });
    //print_container(ans);
    //cout << "\n";

    // 创建一个 ostream_iterator 将数据输出到标准输出流
    //std::ostream_iterator<int> out_iter(std::cout, " ");

    // 使用 *out_iter = value; 将数据写入输出流
    //*out_iter = 10;
    //*out_iter = 20;
    //*out_iter = 30;

    return 0;
}