class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n = nums.length;
        int ans = 0, temp = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 1)
                temp++;
            else{
                ans = Math.max(ans, temp);
                temp = 0;
            }
        }
        ans = Math.max(ans, temp);
        return ans;
    }
}