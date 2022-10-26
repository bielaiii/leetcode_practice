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
      //unordered_set<int> userIds;
      unordered_map<int, int> tweetIds;
      unordered_map<int, unordered_set<int> > follows;
      //unordered_map<int, vector<int> > unfollows;
      vector<int> timelines;
public:
    Twitter() {
      ;
    }
    
    void postTweet(int userId, int tweetId) {
     // userIds.emplace(userId);
      timelines.push_back(tweetId);
      tweetIds[tweetId] = userId;
    }
    
    vector<int> getNewsFeed(int userId) {
      auto rit = timelines.rbegin();
      vector<int> feed;
      for(int i = 0 ; i < sz && rit != timelines.rend()  ; rit++){
            if(tweetIds[*rit] == userId || follows[userId].count(*rit)){
                  feed.push_back(*rit);
                  i++;
            }
      }
      return feed;
      
    }
    
    void follow(int followerId, int followeeId) {
     // if(follows[followerId].size() == 0) follows[f]
      follows[followerId].emplace(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
      auto found = follows[followerId].find(followeeId);
      if(found != follows[followerId].end()){
            follows[followerId].erase(found);
      }
      
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