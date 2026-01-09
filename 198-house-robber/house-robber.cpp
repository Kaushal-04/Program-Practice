class Solution {
public:
    int help(vector<int>& nums, int ind, vector<int>& dp){
        if(ind > nums.size() - 1)
            return 0;
        if(dp[ind] != -1)
            return dp[ind];
        int rob = nums[ind] + help(nums, ind+2, dp);
        int notrob = 0 + help(nums, ind+1, dp);
        dp[ind] = max(rob, notrob);
        return dp[ind];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return help(nums, 0, dp);
    }
};