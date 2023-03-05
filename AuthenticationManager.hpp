#include<iostream>
#include<unordered_map>
using namespace std;


class AuthenticationManager {
public:
    AuthenticationManager(int timeToLive) {
        live_second = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        ump[tokenId] = {currentTime, currentTime + live_second};
    }
    
    void renew(string tokenId, int currentTime) {
        if(ump.find(tokenId) == ump.end()) return;
        if(ump[tokenId].second < currentTime) return;
        this->generate(tokenId, currentTime);
    }
    
    int countUnexpiredTokens(int currentTime) {
        int ct = 0;
        for(auto it : ump ){
            if (currentTime <= it.second.second) {
                ct++;
            }
        }
        return ct;
    }
private:
    int live_second = 0;
    unordered_map<string, pair<int,int>> ump;
};
