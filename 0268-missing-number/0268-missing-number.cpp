class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n = nums.size();
     int sum = 0;
     for(int i = 0; i < n ; i++){
       sum = sum + nums[i];
     }
     int act_sum = (n*(n+1))/2;
     int ans = act_sum - sum;
     return ans;
    }
};