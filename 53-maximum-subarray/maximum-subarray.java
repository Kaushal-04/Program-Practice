class Solution {
    public int maxSubArray(int[] nums) {
        int n = nums.length;
        int sum = nums[0], maxi = Integer.MIN_VALUE;
        for(int i=1; i<n; i++){
            maxi = Math.max(maxi, sum);
            if((sum + nums[i]) > nums[i])
                sum += nums[i];
            else
                sum = nums[i];
        }
        maxi = Math.max(maxi, sum);
        return maxi;
    }
}