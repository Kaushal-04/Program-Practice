class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        auto sum = 0, curr = 0;
        int n = nums.size();
        bool positive = false;
        for(int i=0; i<n; i++){
            if(nums[i] >= 0)
                positive = true;
            curr += nums[i];
            sum = max(sum, curr);
            if(curr < 0)
                curr = 0;
        }
        if(!positive)   return *max_element(nums.begin(), nums.end());
        return sum;
    }
};