class Solution {
public:
    int help(vector<int>& nums, int i, vector<int>& dp){
        if(i >= nums.size())    return 0;
        if(dp[i] != -1) return dp[i];
        int pic = nums[i] + help(nums, i+2, dp);
        int nonpic = help(nums, i+1, dp);
        dp[i] = max(pic, nonpic);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return help(nums, 0, dp);
    }
};