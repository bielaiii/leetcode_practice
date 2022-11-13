#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/* vector<vector<int>> fourSum(vector<int>& nums, int target) {
      
      vector< vector< int> > vec;
      if(nums.size() < 4) return vec;
      sort(nums.begin(), nums.end());
      int len = nums.size();
      for(int i = 0; i < len - 3; i ++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            if((long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target){
                  break;
            }
            if( (long)nums[i] + nums[len - 3] + nums[len -2] + nums[len -1] < target){
                  continue;
            }
            for(int j = i + 1; j < len - 2; j++){
                  if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                  if((long)nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target){
                        break;
                  }
                  if((long)nums[i] + nums[j] + nums[len - 1] + nums[len - 2] < target){
                        continue;
                  }
                //  long temp = nums[i] + nums[j];
                  int left = j + 1, right = len - 1;
                  while(left < right){
                        long sum_ = nums[i] + nums[j] + nums[left] + nums[right] ;
                        if(sum_ == target){
                              vec.push_back({nums[i], nums[j], nums[left], nums[right]});
                              while(left < right && nums[left] == nums[left+ 1]) left ++;
                              left ++;
                              while(left < right && nums[right] == nums[right - 1 ]) right --;
                              right --;
                        }else if(sum_ < target){
                              left ++  ;
                        }else{
                              right -- ;
                        }    
                  }
            }
      }
      return vec;
} */


void backtracking_fourSum(const vector<int> &nums, const int target, vector< vector<int> > &vec, vector<int> temp, int idx, int sum){
      if(temp.size() == 4 ){
            if(sum == target){
                  vec.push_back(temp);
            }else{
                  return ;
            }
      }
      for(int i = idx + 1; i < nums.size(); i++){
            temp.push_back(nums[i]);
            backtracking_fourSum(nums, target, vec, temp, i, sum + nums[i]);
      }
}

vector<vector<int>> fourSum(vector<int>& nums, int target){

}

