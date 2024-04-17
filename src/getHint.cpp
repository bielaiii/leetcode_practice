#include <iostream>
#include <numeric>
#include <string>
#include <vector>
// #include<format>
#include <ranges>
#include <set>
using namespace std;

string getHint(string secret, string guess)
{
    int A = 0;
    int B = 0;
    set<int> gg;
    set<int> ss;
    // ##for (auto [s, g] : views::zip(secret, guess)) {
    vector<int> vt_s(10, 0);
    vector<int> vt_g(10, 0);
    //iota(vt_s.begin(), vt_s.end(), 0);
    //iota(vt_g.begin(), vt_g.end(), 0);
    for (int i = 0; i < secret.length(); i++) {
        if (secret[i] == guess[i]) {
            A++;
        } else {
            // gg.insert(guess[i]);
            vt_g[guess[i]- '0']++;
            vt_s[secret[i] - '0']++;
            // ss.insert(secret[i]);
        }
    }
    for (int i = 0; i < 10; i++) {
        if (vt_g[i] && vt_s[i]) {
            B+=(min(vt_g[i], vt_s[i]));
        }
    }
    string ans = to_string(A) + "A" + to_string(B) + "B";
    return ans;
}