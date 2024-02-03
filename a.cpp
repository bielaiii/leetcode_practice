#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <string_view>
#include <ranges>
using namespace std;
int main()
{
    vector<char > vt1 = {'a', 'b', 'd', 'e'};
    vector<int > vt2 = {1, 2, 3, 4};
    vector<double > vt3 = {100, 200, 300, 400};
    for (tuple<char&, int&, double&> elem : std::views::zip(vt1, vt2, vt3)) {
        cout << std::get<0>(elem) << " ";
        cout << std::get<1>(elem) << " ";
        cout << std::get<2>(elem) << " ";
        cout <<endl;
    
    }

    return 0;
}