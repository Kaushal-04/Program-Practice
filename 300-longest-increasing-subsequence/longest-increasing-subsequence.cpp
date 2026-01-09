class Solution {
public:
    int help(vector<int>& nums, int curr, int prev, vector<vector<int>>& dp){
        if(curr == nums.size()) return 0;
        if(prev != -1 && dp[curr][prev] != -1)
            return dp[curr][prev];
        int take = 0;
        if(prev == -1 || nums[curr] > nums[prev])
            take = 1 + help(nums, curr + 1, curr, dp);
        int nottake = 0 + help(nums, curr + 1, prev, dp);
        if(prev != -1)
            dp[curr][prev] = max(take, nottake);
        return max(take, nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(2501, vector<int>(2501, -1));
        return help(nums, 0, -1, dp);
    }
};