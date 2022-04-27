#include <iostream>
#include <vector>
#include <map>
using namespace std;;

bool canFinish(int numCourses, vector<vector<int>> & prerequisites){
    map<int, int> course;
    //----1-0
    
    course[prerequisites[0][1]] = prerequisites[0][0];
    for(int i = 1; i < prerequisites.size(); i++){
        if(course.count(prerequisites[i][1])){
            return false;
        }else{
            course.insert({prerequisites[i][1], prerequisites[i][1]});
        }
    }
    int i = 0;
    for(auto it = course.begin(); it != course.end() ; it ++){
        i ++;
    }
    return numCourses > i ? true: false;
}