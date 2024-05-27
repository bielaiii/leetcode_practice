#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct WinOrLose {
    int win;
    int lose;
    WinOrLose() :win(0), lose(0) {};
    WinOrLose(int w, int l) : win(w), lose(l) {};
};

static void foo(map<int, WinOrLose>& mp, int player, int newWin, int newLose) {

    auto& temp = mp[player];
    temp.win += newWin;
    temp.lose += newLose;
}

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    map<int, WinOrLose> mp;
    for (const auto& match : matches) {
        auto winner = match[0];
        auto loser = match[1];
        foo(mp, winner, 1, 0);
        foo(mp, loser, 0, 1);
    }
    vector<int> winner;
    vector<int> loser;
    for_each(mp.begin(), mp.end(), [&](pair<int, WinOrLose> t) {
        if (t.second.lose == 0) {
            loser.push_back(t.first);
        } else if (t.second.lose == 1) {
            winner.push_back(t.first);
        }
    });
    return {loser, winner};
}