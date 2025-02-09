class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[i - nums[i]]++;
        }
        long long ans = 0;
        for(auto it : mp) {
            long long temp = it.second;
            ans += (temp * (temp - 1)) / 2;
        }
        int n = nums.size();
        long long tot = (1LL * n * (n - 1)) / 2;
        return tot - ans;
    }
};