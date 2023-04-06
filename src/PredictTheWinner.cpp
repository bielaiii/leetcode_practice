#include<iostream>
#include<vector>

using namespace std;

int rec_PredictTheWinner(const vector<int> &nums, int l, int r, int turn ){
      if(l == r) return nums[l] * turn;
      int score2 = nums[l] * turn + rec_PredictTheWinner(nums, l + 1, r, - turn);
      int score1 = nums[r] * turn + rec_PredictTheWinner(nums, l , r - 1, - turn);
      return max(score1 * turn, score2 * turn) * turn;
}

bool PredictTheWinner(vector<int>& nums) {
      vector<int> sum{0,0};
      int l = 0, r = nums.size() - 1, i = 1;
      return rec_PredictTheWinner(nums, l , r, i) >= 0;
}