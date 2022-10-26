#include "header.h"
#include <iostream>
#include <vector>
#include<string>
#include<set>
#include<map>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include<queue>
#include"print_1d_array.cpp"
#include"KthLargest.cpp"
#include"Twitter.cpp"
//#include "magicDictionary.cpp"
using namespace std;




int main(void){
	Twitter twitter = Twitter();
	cout << twitter.postTweet(1, 5) <<endl; // 用户 1 发送了一条新推文 (用户 id = 1, 推文 id = 5)
	cout << twitter.getNewsFeed(1)  <<endl; // 用户 1 的获取推文应当返回一个列表，其中包含一个 id 为 5 的推文
	cout << twitter.follow(1, 2)    <<endl; // 用户 1 关注了用户 2
	cout << twitter.postTweet(2, 6) <<endl; // 用户 2 发送了一个新推文 (推文 id = 6)
	cout << twitter.getNewsFeed(1)  <<endl; // 用户 1 的获取推文应当返回一个列表，其中包含两个推文，id 分别为 -> [6, 5] 。推文 id 6 应当在推文 id 5 之前，因为它是在 5 之后发送的
	cout << twitter.unfollow(1, 2)  <<endl; // 用户 1 取消关注了用户 2
	cout << twitter.getNewsFeed(1)  <<endl; // 用户 1 获取推文应当返回一个列表，其中包含一个 id 为 5 的推文。因为用户 1 已经不再关注用户 2


	
	return 0;
}
