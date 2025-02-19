class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int inc = nums[0],  maxi = INT_MIN, n = nums.size();
        maxi = max(inc, maxi);
        for(auto i=1; i<n; i++){
            if(nums[i-1] < nums[i]){
                inc += nums[i];
                maxi = max(inc, maxi);
            }else {
                inc = nums[i];
            }
        }
        return maxi;
    }
};