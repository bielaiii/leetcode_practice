#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Twitter {
private:
      const int sz = 10;
      unordered_set<int> userIds;
      unordered_map<int, vector<int> > tweetIds;
      unordered_map<int, vector<int> > follows;
      unordered_map<int, vector<int> > unfollows;

public:
    Twitter() {
      ;
    }
    
    void postTweet(int userId, int tweetId) {
      userIds.emplace(userId);
      tweetIds[userId].push_back(tweetId);
    }
    
    vector<int> getNewsFeed(int userId) {
      auto it = follows[userId].begin();
      vector<int> tweets; 
      for(int i = 0 ; i < sz && it != follows[userId].end() ; i ++){
            tweets.push_back(it.second)
      }
    }
    
    void follow(int followerId, int followeeId) {

    }
    
    void unfollow(int followerId, int followeeId) {

    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */