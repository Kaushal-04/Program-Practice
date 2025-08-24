class Solution {
public:
    int help(vector<int>& nums, int maxi, int i, vector<int>& dp){
        if(i >= nums.size())    return 0;
        if(dp[i] != -1) return dp[i];
        maxi += nums[i];
        int pic = nums[i] + help(nums, maxi, i+2, dp);
        maxi -= nums[i];
        int nonpic = help(nums, maxi, i+1, dp);
        dp[i] = max(pic, nonpic);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return help(nums, 0, 0, dp);
    }
};