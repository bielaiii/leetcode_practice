
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


string discountPrices(string sentence, int discount)
{
    sentence += " ";
    istringstream is(sentence);
    auto caler = [=](string pricestr) {
        auto price_double = stod(pricestr);
        auto ans = setprecision(2);
        ostringstream oss;
        oss << std::fixed << setprecision(2) << price_double * (100 - discount) * 100 / 10000;
        return oss.str();
    };
    string ans = "";
    string word = "";
    while (is >> word) {
        if (word[0] != '$') {
            ans += " " + word;
        } else {
            if (word.length() > 1 && all_of(word.begin() + 1, word.end(), [](char c) {
                return std::isdigit(c);
            })) {
                auto price = caler(word.substr(1));
                ans += " $" + price;
            } else {
                ans += " "+ word;
            }
        }
    }
    return ans.substr(1);
}