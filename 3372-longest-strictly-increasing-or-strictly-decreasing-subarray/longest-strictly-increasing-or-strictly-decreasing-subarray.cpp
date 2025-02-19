class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1, maxi = INT_MIN, n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i-1] < nums[i]){
                inc++;
                dec = 1;
                maxi = max(max(inc, dec), maxi);
            }else 
                if(nums[i-1] > nums[i]){
                    dec++;
                    inc = 1;
                    maxi = max(max(inc, dec), maxi);
                }else {
                    inc = 1;
                    dec = 1;
                }

        }
        return  max(max(inc, dec), maxi);
    }
};