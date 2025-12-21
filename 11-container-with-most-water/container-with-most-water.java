class Solution {
    public int maxArea(int[] height) {
        int maxi = 0;
        int l = 0, r= height.length - 1;
        while(l < r){
            int water = Math.min(height[r] , height[l]) * (r-l);
            maxi = Math.max(maxi, water);
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxi;
    }
}