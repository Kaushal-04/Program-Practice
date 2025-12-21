class Solution {
    public int longestOnes(int[] nums, int k) {
        int maxi = 0, l = 0, r = 0, zero = 0;
        while(r < nums.length){
            if(nums[r] == 1){
                maxi = Math.max(maxi, r-l+1);
                r++;
                continue;
            }
            else 
                if(zero < k){
                maxi = Math.max(maxi, r-l+1);
                r++;
                zero++;
                continue;
                }
            while(zero >= k && l <= r){
                if(nums[l] == 0)
                    zero--;
                l++;
            }
        }
        return maxi;
    }
}