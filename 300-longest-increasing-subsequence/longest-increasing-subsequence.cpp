// Use Bottom up DP Approach
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxi = 1;
        vector<int> dp(n, 1);
        for(int i=1; i<n; i++){
            int j = 0; 
            while(j < i){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                    maxi = max(maxi, dp[i]);
                }
                j++;
            }
        }
        return maxi;
    }
};