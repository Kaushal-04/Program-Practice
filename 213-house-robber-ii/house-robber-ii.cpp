class Solution {
public:
    int help(vector<int>& nums, int ind, int end, vector<int>& dp) {
        if(ind > end) return 0;
        if(dp[ind] != -1)   return dp[ind];
        int pic = nums[ind] + help(nums, ind + 2, end, dp);
        int notpic = help(nums, ind + 1, end, dp);
        dp[ind] = max(pic, notpic);
        return dp[ind];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        vector<int> dp(n, -1);
        int exceptLast = help(nums, 0, n - 2, dp);
        fill(dp.begin(), dp.end(), -1);
        int exceptFirst = help(nums, 1, n - 1, dp);
        return max(exceptLast, exceptFirst);
    }
};
