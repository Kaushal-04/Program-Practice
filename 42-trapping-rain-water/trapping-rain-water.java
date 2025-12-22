class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int[] pre = new int[n];
        int[] post = new int[n];
        for(int i=0; i<n; i++){
            pre[i] = 0;
            post[i] = 0;
        }
        for(int i=1; i<n; i++){
            pre[i] = Math.max(pre[i-1], height[i-1]);
            post[n-i-1] = Math.max(post[n-i], height[n-i]);
        }

        int water = 0;
        for(int i=0; i<n; i++){
            int curr = Math.min(pre[i], post[i]) - height[i];
            if(curr > 0)
                water += curr;
        }
        return water;
    }
}