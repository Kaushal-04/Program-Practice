class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int[] pre = new int[n];
        int[] post = new int[n];
        pre[0] = nums[0];
        post[n-1] = nums[n-1];
        for(int i=1; i<n; i++){
            if(pre[i-1] == 0)
                pre[i] = nums[i];
            else
                pre[i] = pre[i-1] * nums[i];
            if(post[n-i] == 0)
                post[n-i-1] = nums[n-i-1];
            else
                post[n-i-1] = post[n-i] * nums[n-i-1];
        }
        int maxi = Integer.MIN_VALUE;
        for(int i=0; i<n; i++){
            int temp = Math.max(pre[i], post[i]);
            maxi = Math.max(maxi, temp);
        }
        return maxi;
    }
}